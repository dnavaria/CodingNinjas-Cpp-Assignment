/*
Sort 0 1

You are given an integer array A that contains only integers 0 and 1. 
Write a function to sort this array. Find a solution which scans the array only once. 
Don't use extra array.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Output format :
Sorted array elements
Constraints :
1 <= N <= 10^6
*/

#include <bits/stdc++.h> 
using namespace std;

/*
void SortZeroesAndOne(int a[], int size){
    
  sort(a,a+size);
}
*/


void SortZeroesAndOne(int a[], int size){
	int st = 0;
  int temp;
  for (int i = 0; i < size; i++)
    {
        if (a[i] == 0)
        {
            temp = a[st];
            a[st] = a[i];
            a[i] = temp;
            st++;
            continue;
        }
    }
}

void print(int *arr, int n){
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}
int main(){
	int a[] = {1,0,1,0,1,0,1,0};
	SortZeroesAndOne(a,8);
    print(a,8);

	return 0;
}