/*Alpha Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC*/

#include<iostream>

using namespace std;


int main(){
	int n;
	cin>>n;	
	char ch = 'A';
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j <=i ; j++){
			cout<<ch;	
		}
		cout<<endl;
		ch++;
	}

	return 0;
}