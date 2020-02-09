/*Find power of a number

Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.*/

#include<iostream>

zz
using namespace std;


int main(){

	long x,y,n;
	cin>>x>>n;
	y = x;
    if(n == 0){
        x=1;
    }else{
         for (int i = 0; i < n-1; ++i)
             x *= y;
    }

	cout<<x;


	return 0;
}