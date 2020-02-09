#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*a = temp;
}

void printArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	cout << endl;
}

void insertionSort(int *a, int n)
{
	int pick = 0;
	for (int i = 1; i < n; i++)
	{
		pick = a[i];
		int j = i - 1;
		for (; j >= 0 && pick < a[j]; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = pick;
	}
}

void selectionSort(int *a, int n)
{
	int minValue = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - i - 1; j++)
		{
			if (a[minValue] > a[j])
			{
				minValue = j;
			}
		}
		swap(a[minValue], a[i]);
	}
}

void bubbleSort(int *a, int n)
{
	int swapped = 0, x=0;
	for (int i = 0; i < n - 1; ++i)
	{
		if(x == 1){
			cout<<a[0];
			return;
		}
		swapped = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{   
				swap(a[j + 1], a[j]);
				swapped = 1;
			
			}
			
		}
		x++;
		if (!swapped)
		{
			break;
		}
	}
	
}

void merge(int a[], int size1, int b[], int size2, int c[])
{
	int n = size2 + size1;

	int x = 0, y = 0;

	a[size1] = INT_MAX;
	b[size2] = INT_MAX;

	for (int i = 0; i < n; ++i)
	{

		if (a[x] < b[y])
		{
			c[i] = a[x];
			++x;
		}

		else if (a[x] > b[y])
		{
			c[i] = b[y];
			++y;
		}
		else if (a[x] == b[y] && a[x] != INT_MAX)
		{
			c[i] = a[x];
			++x;
		}
		else if (a[x] == INT_MAX)
		{
			for (int z = y; z < size2 && i < n; ++z)
			{
				c[i] = b[z];
				i++;
			}
			return;
		}
		else if (b[y] == INT_MAX)
		{
			for (int j = x; j < size1 && i < n; j++)
			{
				c[i] = a[j];
				i++;
			}
			return;
		}
	}
}

int main()
{
	int a[] = {6,5,4,3,2,1};
	int n = sizeof(a)/sizeof(int);
	bubbleSort(a,n);
}


//	int b[] = {1,6,7,8,9,10};
//	int n1 = sizeof(b)/sizeof(int);
//	int *c = new int[n+n1];
//	merge(a,n,b,n1,c);
//	printArray(c,n+n1);
//	delete []c;
//	return 0;
