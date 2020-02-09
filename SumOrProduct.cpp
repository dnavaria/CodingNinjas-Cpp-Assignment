/*Sum or Product

Write a program that asks the user for a number N and a choice C.
And then give him the possibility to choose between computing the sum and computing the product of 1 ,..., N.
If user enters C is equal to -
 1 : Print sum of 1 to N numbers
 2 : Print product of 1 to N numbers
 Any other number : print -1
Input format :
Line 1 : Integer N
Line 2 : Choice C (1 or 2)
Output Format :
 Sum or product according to user's choice*/

#include <bits/stdc++.h> 
using namespace std;
int main(){
	int choice = -1,n,var=0;
	cin>>n>>choice;

	if(choice == 1){
		for (int i = 1; i <= n; ++i)
		{
			var+=i;
		}
	}else if(choice == 2){
        var = 1;
		for (int i = 1; i <= n; ++i)
		{
			var*=i;
		}
	}else{
		var = -1;
	}

	cout<<var;

	return 0;
}