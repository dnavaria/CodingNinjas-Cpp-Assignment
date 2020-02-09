/*Number Pattern 3
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
11
121
1221*/

#include<iostream>

using namespace std;


int main(){
	
	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j <=i ; j++){
			if(j == 0 || j == i){
				cout<<"1";
			}
			else{
				cout<<"2";
			}
		}
		cout<<endl;
	}
	return 0;
}