/*
Geometric Sum

Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion. Return the answer.
Sample Input :
3
Sample Output :
1.875
*/
#include <bits/stdc++.h> 
using namespace std;
double calculate(int k,int n){
	if (n==k)
	{
		return 1/pow(2,k);
	}
	return 1/pow(2,n)+calculate(k,n+1);
}

double geometricSum(int k) {
    
    double l=0;
    l = calculate(k,0);
    return l;
}

