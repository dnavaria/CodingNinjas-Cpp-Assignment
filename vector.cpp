/*
	vectors
*/

#include <iostream> 
#include <vector> 

using namespace std;
int main(){

	vector<int> v;
	//vector<int> *vp = new vector<int>();

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//dont use [] for inserting elements
	//v[3] = 1002;
	//v[4] = 1234;
	v.pop_back();	
	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	cout<<v.at(2)<<endl;
	cout<<v.size()<<endl;
	
	return 0;
}