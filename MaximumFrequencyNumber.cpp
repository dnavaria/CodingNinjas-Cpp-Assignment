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
Code : Maximum Frequency Number

You are given an array of integers that contain numbers in random order. Write a program to find and return the number which occurs the maximum times in the given input.
If two or more elements contend for the maximum frequency, return the element which occurs in the array first.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Most frequent element
Constraints :
0 <= N <= 10^8
Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6
Sample Output 1 :
2
Sample Input 2 :
3
1 4 5
Sample Output 2 :
1
*/
int highestFrequency(int *a, int n)
{
    unordered_map<int, int> um;
    rep(i, n)
    {
        if(um.count(a[i]) == 0)
        {
            um[a[i]] = 1;
        }
        else
        {
            um[a[i]]++;
        }
    }

    int max = um[a[0]];
    int ans = a[0];
    int j = 1;
    while(j < n)
    {
        if(um[a[j]] > max)
        {
            max = um[a[j]];
            ans = a[j];
        }
        j++;
    }
    return ans;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int input[100000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int maxKey = highestFrequency(input, n);
    cout << maxKey;
    return 0;
}