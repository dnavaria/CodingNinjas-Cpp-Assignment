/*Sum of even & odd

Write a program to input an integer N and print the sum of 
all its even digits and sum of all its odd digits separately.
Digits means numbers not the places. That is, if the given integer 
is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.*/

#include<iostream>


using namespace std;


int main(){
	
	int temp, n, sEven=0, sOdd=0;
	cin>>n;

	while(n>0){
		temp = n % 10;
		(temp % 2 == 0) ? sEven += temp : sOdd += temp;
		n = n/10;
	}

	cout<<sEven<<" "<<sOdd;
	return 0;

}