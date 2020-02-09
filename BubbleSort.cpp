/*Code Bubble Sort

Given a random integer array. Sort this array using bubble sort.
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Constraints :
1 <= N <= 10^3*/

#include <bits/stdc++.h> 
using namespace std;

void printArray(int arr[],int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*a = temp;
}

void BubbleSort(int ar[], int n){

	for (int i = 0; i < n; ++i)
	{
		for(int j = i+1; j <n ; j++){
			if(ar[i] > ar[j])
				swap(ar[i],ar[j]);
		}
	}
}


int main(){
	int ar[] = {9,8,7,6,5};
	BubbleSort(ar,5);	
	printArray(ar,5);
	return 0;
}