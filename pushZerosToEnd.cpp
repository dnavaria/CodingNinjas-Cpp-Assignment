/*Push Zeros to end

Given a random integer array, push all the zeros that are present to end of the array. 
The respective order of other elements should remain same.
Change in the input array itself. 
You don't need to return or print elements. Don't use extra array.
Note : You need to do this in one scan of array only.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Output Format :
Array elements (separated by space)
Constraints :
1 <= N <= 10^6
Sample Input 1:
7
2 0 4 1 3 0 28
Sample Output 1:
2 4 1 3 28 0 0
Sample Input 2:
5
0 3 0 2 0
Sample Output 2:
3 2 0 0 0*/

#include <bits/stdc++.h> 
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*a = temp;
}

void printArray(int arr[],int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

void PushZeroesEnd(int a[], int n){
	int iter = 0;
	for (int i = 0; i < n; ++i){
			if(a[i] != 0){
				swap(a[iter],a[i]);
				++iter;
			}
		}	
}

int main(){
	int a[] = {2,0,3,0,4,0,0,5,0};	
	int n = sizeof(a)/sizeof(int);
	printArray(a,n);
	PushZeroesEnd(a,n);
	cout<<endl;
	printArray(a,n);

	return 0;
}