/*Sum of Even Numbers till N

Given a number N, print sum of all even numbers from 1 to N.*/

#include<iostream>

using namespace std;

int main(){

	int n;
	cin>>n;

	int sum = 0;
	for (int i = 0; i <= n; ++i){
			sum += (i%2==0)?i:0;
		}	
		cout<<sum;

	return 0;
}