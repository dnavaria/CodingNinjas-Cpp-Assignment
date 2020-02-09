/*
Reverse of a number

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Input format :
Integer N
Constraints:
Time Limit: 1 second
Output format :
Corresponding reverse number*/

#include <bits/stdc++.h> 

using namespace std;
int main(){
		int n=0; cin>>n;
		int p = 0;
        if(n == 0){
            cout<<"0";
        }else{
			while(n>0){
				if(p == 0){
					if(n%10 == 0){
						p = 0;
					}else{
						p = 1;
					}
				}
				if(p == 1){
					cout<<n%10;
				}
				n/=10;
			}
        }
		
	return 0;
}