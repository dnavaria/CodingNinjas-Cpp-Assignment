#include <bits/stdc++.h> 

#define op1(x) cout<<#x<<"="<<x<<'\n'
#define op2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define op3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

vector<int> removeDuplicates(int *a,int size){
	vector<int>  output;
	unordered_map<int,bool> seen;
	for (int i = 0; i < size; ++i)
	{
		if (seen.count(a[i])>0)
		{
			continue;
		}
		seen[a[i]] = true;
		output.push_back(a[i]);
	}
	return output;
}
void printVector(const vector<int> &arr){
	for(auto i=arr.begin(); i!=arr.end(); i++)
		cout<<*i<<" ";
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	int a[] = {1,2,3,3,2,1,4,3,6,5,5};
	int n = sizeof(a)/sizeof(int);
	vector<int> output = removeDuplicates(a,n);
	printArray(output);
	return 0;
}