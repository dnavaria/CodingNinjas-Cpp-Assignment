/*Find duplicate

Given an array of integers of size n which contains numbers from 0 to n - 2.
Each number is present at least once. That is, if n = 5, numbers from 0 to 3 is present in the given array at least once and one number is present twice. 
You need to find and return that duplicate number present in the array.
Assume, duplicate number is always present in the array.
Input format :
Line 1 : Size of input array
Line 2 : Array elements (separated by space)
Output Format :
Duplicate element*/

#include <bits/stdc++.h> 
using namespace std;

// arr - input array
// size - size of array

/*Algorithm:

traverse the list for i= 0 to n-1 elements
{
  check for sign of A[abs(A[i])] ;
  if positive then
     make it negative by   A[abs(A[i])]=-A[abs(A[i])];
  else  // i.e., A[abs(A[i])] is negative
     this   element (ith element of list) is a repetition
}*/

int MissingNumber(int arr[], int size){
	for (int i = 0; i < size; ++i){
		if(arr[abs(arr[i])] >=0)
			arr[abs(arr[i])]=-arr[abs(arr[i])];
		else
			return abs(arr[i]);
	}

}


int main(){
	int arr[] = {0,7,2,5,1,7,1,3,6};	
	cout<<MissingNumber(arr,9);
	return 0;
}