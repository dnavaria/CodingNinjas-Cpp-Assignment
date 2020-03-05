/*
  Zeros and Stars Pattern

Print the following pattern
 
Pattern for N = 4
*000*000*
0*00*00*0
00*0*0*00
000***000
 
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
 
Sample Input 1 :
3
Sample Output 1 :
*00*00*
0*0*0*0
00***00

Sample Input 2 :
5
Sample Output 2 :
*0000*0000*
0*000*000*0
00*00*00*00
000*0*0*000
0000***0000
  */


#include <iostream>

using namespace std;
void printZeroAndStar(int n){
	int z=(n-1)*2,s=3;
	int m = z+s;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int c = (m-1)-i;
			if((i==j) || j == n || j == c){cout<<"*";}
			else{cout<<"0";}
			}
			cout<<endl;
		}
}
int main()
{
	int y;
	cin>>y;
	printZeroAndStar(y);
}
