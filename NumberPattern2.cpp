/*Number Pattern 2

Print the following pattern
Pattern for N = 4
       1
     23
   345
 4567*/

#include<iostream>


using namespace std;


int main(){
	
	int n;
	cin>>n;
	int ct = 1;
	int sec = 2;

	for(int i=1; i<=n ;i++ ){
		for (int x = n; x>i ; x-=1)
		{
			cout<<" ";
		}
		for (int j = 0; j < i; j++)
		{
			cout<<ct;
			sec = (j == 1)? ct:sec;
			ct++;
			
		}
		ct = sec;
		cout<<endl;
	}
	return 0;
}