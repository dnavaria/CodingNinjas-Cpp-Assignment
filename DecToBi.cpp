/*Decimal to Binary

Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So take the answer as long.
Input format :
Integer N
Output format :
Corresponding Binary number (long)*/

#include <bits/stdc++.h> 
using namespace std;
int main(){
	long n,biCal = 1,x=0;
	cin>>n;

	while(n>0){
		long temp = n%2;
		x = x + temp * biCal;
		biCal *=10;#000000
		n = n/2;
	}
	cout<<x;
	return 0;
}
