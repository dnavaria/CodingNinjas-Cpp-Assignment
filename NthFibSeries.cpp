/*Nth Fibonacci Number

Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
Provided N you have to find out the Nth Fibonacci Number. Also F(1) = F(2) = 1.*/


#include<iostream>


using namespace std;


int main(){
	
	int n;
	cin>>n;
	int a=1,b=1;
	for(int i = 2 ;i<n; i++){
		int x = a;
		a+=b;
		b=x;
	}

	cout<<a;
}