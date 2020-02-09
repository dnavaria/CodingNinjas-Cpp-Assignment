/*Find duplicate

Given an array of integers of size n which contains numbers from 0 to n - 2. 
Each number is present at least once. That is, if n = 5, 
numbers from 0 to 3 is present in the given array at least once and one number is present twice. 
You need to find and return that duplicate number present in the array.
Assume, duplicate number is always present in the array.
Input format :
Line 1 : Size of input array
Line 2 : Array elements (separated by space)
Output Format :
Duplicate element
Constraints :
1 <= n <= 10^3

*/

#include <bits/stdc++.h> 
using namespace std;

/* Another solution

int FindUnique(int * a, int n){    
    
 int o = 0;
    int val;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if(a[i]==a[j]){
                    o+=1;
                }
            }
        }
        if(o==0){
            val = a[i];
        }
        o=0;
    }
}

*/
int FindUnique(int * a, int n){    
    //solution by xor, works only if the element appears once in an array
    //whereas every other element appears twice.
    int x=0;
	for (int i = 0; i < n; ++i){
		x = x ^ a[i];
        cout<<x<<" ";
	}

    return x;
}

int main(){
	int ar[] = {2,1,3,1,3,6,6,4};
    int n = sizeof(ar)/sizeof(int);
	cout<<FindUnique(ar,n);
	return 0;
}