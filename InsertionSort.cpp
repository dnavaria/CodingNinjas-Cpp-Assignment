/*Code Insertion Sort

Given a random integer array. Sort this array using insertion sort.
Change in the input array itself. You don't need to return or print elements.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Constraints :
1 <= N <= 10^3*/


#include <bits/stdc++.h> 
using namespace std;

// arr - input array
// n - size of array
void InsertionSort(int a[], int n){
	// Write your code here
	int curr = 0;
  	int i,j;
  for(i = 1;i<n;i++){
    curr = a[i];
    for(j=i-1;j>=0;j--){
      if(curr<a[j]){
        a[j+1] = a[j];
      }
      else{
        break;
      }
    }
    a[j+1] = curr;
  }
}


