#include <bits/stdc++.h>

#define op1(x) cout<<#x<<"="<<x<<'\n'
#define op2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define op3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

/*
Code : Print Intersection

Given two random integer arrays, print their intersection. That is, print all the elements that are present in both the given arrays.
Input arrays can contain duplicate elements.
Note : Order of elements are not important
Input format :
Line 1 : Integer N, Array 1 Size
Line 2 : Array 1 elements (separated by space)
Line 3 : Integer M, Array 2 Size
Line 4 : Array 2 elements (separated by space)
Output format :
Print intersection elements in different lines
Constraints :
0 <= M, N <= 5 * 10^7
Sample Input 1 :
6
2 6 8 5 4 3
4
2 3 4 7 
Sample Output 1 :
2 
4 
3
Sample Input 2 :
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
2 
2
1
*/
void intersection(int input1[], int input2[], int size1, int size2)
{
    unordered_map<int, int> um1, um2;

    rep(i, size1)
    {
        um1[input1[i]]++;
    }
    rep(i, size2)
    {
        um2[input2[i]]++;
    }

    unordered_map<int, int>::iterator i1 = um1.begin();
    for (; i1 != um1.end() ; )
    {
        if(um2.count(i1->first)>0){
        	if(um2[i1->first] !=0 && i1->second !=0){
        		cout<<i1->first<<"\n";
        		int value1 = i1->second-1; 
        		int value2 = um2[i1->first]-1;
        		i1->second = value1; 
        		um2[i1->first] = value2;
        	}
        	else{
        		i1++;	
        	} 
        }else{
        	i1++;
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size1, size2;

    cin >> size1;
    int *input1 = new int[1 + size1];

    for(int i = 0; i < size1; i++)
        cin >> input1[i];

    cin >> size2;
    int *input2 = new int[1 + size2];

    for(int i = 0; i < size2; i++)
        cin >> input2[i];


    intersection(input1, input2, size1, size2);


    return 0;
}