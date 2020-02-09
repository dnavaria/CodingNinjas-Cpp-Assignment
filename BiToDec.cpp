/*Binary to decimal

Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N
Output format :
Corresponding Decimal number (as integer)*/

#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	cin>>n;

	int ans = 0, prev = 1, i = 0;
	while(n>0){
		ans = ans + (n%10) * pow(2,i);
		i++;
		n/=10;
	}
	cout<<ans;
	return 0;
}