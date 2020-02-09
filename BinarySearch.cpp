/*Code Binary Search

Given a sorted integer array (in ascending order) and an element x. 
You need to search this element x in the given input array using binary search. 
Return the index of element in the input.
Indexing starts from 0.
Return -1 if x is not present in the input array.
Input format :
Line 1 : Integer N, Array Size
Line 2 : Array elements (separated by space)
Line 3 : Element to be searched (i.e. x)
Output Format :
Index
Constraints :
1 <= N <= 10^6*/

#include <bits/stdc++.h> 
using namespace std;

int BinarySearch(int a[], int n, int val){
	int l = 0, r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == val){
			return m;
		}
		else if(val > a[m]){
			l = m+1;
		}
		else if(a[m] > val){
			r = m-1;
		}
	}

	return -1;
}



int main(){
	int a[] = {1,2,3,5,6};
	cout<<BinarySearch(a,6,6);
	return 0;
}