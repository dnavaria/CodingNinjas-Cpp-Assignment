#include <bits/stdc++.h> 
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*a = temp;
}

void selectionSort(int ar[], int n){

	for (int i = 0; i < n-1; ++i)
	{
		int min = ar[i];
		int midIndex = i;
		for(int j = i+1; j <n ; j++){
				if(min>ar[j]){
				min = ar[j];
				midIndex = j;
			}

		}
		swap(ar[i], ar[midIndex]);	
	}

}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}
int main(){
	int ar[] = {9,8,7,6,5,3,1};	
	selectionSort(ar,7);
	printArray(ar,7);
	return 0;
}