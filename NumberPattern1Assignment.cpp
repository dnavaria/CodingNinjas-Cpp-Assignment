/*Number Pattern 1

Print the following pattern for the given N number of rows.
Pattern for N = 4
1
11
111
1111*/

#include<iostream>


using namespace std;


int main(){
	
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j <=i ; j++){
			cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}