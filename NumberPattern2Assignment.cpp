/*Number Pattern 2

Print the following pattern for the given N number of rows.
Pattern for N = 4
1
11
202
3003*/

/*#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j = 0;j<=i;j++){
            if(i==0){
                cout<<"1";
            }
            else if(j==0||j==i){
                cout<<i;
            }else{
                cout<<"0";
            }
        }
        cout<<endl;
    }

}*/



#include<iostream>


using namespace std;


int main(){
	int n,j=0;
	cin>>n;
	int cz=-1,val=1;
	for (int i = 0; i < n; ++i)
	{
		if (cz == -1 || cz == 0)
		{
			cout<<val;
		}

		for( j = 0; j <cz ; j++){
			if(j == 0){
				cout<<val;
			}
			cout<<"0";
			
		}
		if (j == cz)
			{
				int x = cz;
				cout<<++cz;
				cz = x;

			}
		if (cz >= 0)
		{
			val+=1;
		}
		cz+=1;
		cout<<endl;
	}


	return 0;
}