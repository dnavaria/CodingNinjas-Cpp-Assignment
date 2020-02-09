/*Rotate array

Given a random integer array of size n, 
write a function that rotates the given array by d elements (towards left)
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer d
Output Format :
Updated array elements (separated by space)
Constraints :
1 <= N <= 1000
1 <= d <= N
Sample Input :
7
1 2 3 4 5 6 7
2
Sample Output :
3 4 5 6 7 1 2*/

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

void reverse(int *a, int start, int fin)
{
	int x = 0, y = fin, i = start;
	while (i < y)
	{
		x = a[i];
		a[i] = a[y];
		a[y] = x;
		i++;
		y--;
	}
}
void Rotate(int a[], int d, int size)
{
	if (d >= size)
		d = d % size;
	reverse(a, d, size - 1);
	reverse(a, 0, size - 1);
	reverse(a, size - d, size - 1);
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(int);
	Rotate(a, 2, n);
	printArray(a, n);

	//using inbuilt rotate function
	//std::rotate(a,a+n-3,a+n);

	//using inbuilt reverse function
	//std::reverse(a+2,a+n);
	//std::reverse(a,a+n);
	//std::reverse(a+n-2,a+n);

	return 0;
}