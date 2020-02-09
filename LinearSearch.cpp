/*Linear Search

Given a random integer array A and an element x. 
You need to search this element x in the given array using linear search. 
Return the index of element in the input.
Linear search means, we need to compare elements from the array A one by one with the element x, 
till we found the match or we reach the end of array. If match found, return its index, 
and if not return -1.
Indexing in the array starts from 0.
Input format :
Line 1 : Integer n, Array Size
Line 2 : Array elements (separated by space)
Line 3 : Element to be searched (i.e. x)
Constraints :
1 <= n <= 10^5*/

int linearSearch(int arr[], int n ,int val){
	for (int i = 0; i < n; ++i){
		if (arr[i] == val)
		{
			return i;
		}
	}
	return -1;
}

#include <bits/stdc++.h> 
using namespace std;
int main(){
	int arr[] = {9,8,7,6,5,4};
	int val; cin>>val;
	cout<<linearSearch(arr,6,val);
	return 0;
}