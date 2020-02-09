/*Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
1234
123
12
1*/

#include<iostream>

using namespace std;


int main(){
	
	int n; cin>>n;

	for (int i = n; i >=0; i--)
	{
		for(int j = 1; j <=i ; j++){
			cout<<j;

		}
		cout<<endl;
	}
	return 0;
}