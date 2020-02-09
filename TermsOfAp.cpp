/*Terms of AP

Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
N varies from 1 to 1000.
Input format :
Integer x
Output format :
Terms of series (separated by space)*/

#include <bits/stdc++.h> 
using namespace std;
int main(){
		int x; cin>>x;
		int p =0;
		for (int i = 1;  p< x; ++i){
			if (((3*i)+2) % 4 !=0 )
			{
				cout<<((3*i)+2) <<" ";
				p++;
			}
		}
	return 0;
}