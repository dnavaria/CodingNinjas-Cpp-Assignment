/*Square Root (Integral)

Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
Integer N
Output Format :
Square root of N (integer part only)*/

#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n,sqCal=0,i=1; cin>>n;
	while(sqCal<=n){
		sqCal = i*i;
		if(sqCal>n){
			i-=1;
			break;
		}
		i++;
	}
	cout<<i;
	return 0;
}