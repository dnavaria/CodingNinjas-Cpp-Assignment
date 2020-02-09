/*Swap Alternate

Given an array of length N, swap every pair of alternate elements in the array.
You don't need to print or return anything, just change in the input array itself.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Elements after swapping, separated by space.*/

#include <bits/stdc++.h> 
using namespace std;

void swapAlternate(int a[],int n){
 	
 	int var = a[0];
    n = (n%2 == 0)?n:n-1; 
 	for (int i = 0; i <n ; i+=2){
 		a[i] = a[i+1];
        a[i+1] = var;
        var = a[i+2];
 	}
}

int main(){
	int a[] = {9,3,6,12,4,32};
	swapAlternate(a,6);	
	return 0;
}