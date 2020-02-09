/*Start Pattern

Print the following pattern
Pattern for N = 4
    *
   *** 
  *****
 ********/


#include<iostream>


using namespace std;


int main(){
	int  i,j,k,n;
	cin>>n;

	for ( i = 0; i < n; ++i)
	{
		for ( j = i; j < n-1; ++j)
		{
			cout<<" ";
		}
		
		for ( k = 1; k <=  2 * i +1 ; ++k)
		{
			cout<<"*";
		} 
	
		cout<<endl;
	}


	return 0;
}