/*
Pair sum

Given a random integer array A and a number x. 
Find and print the pair of elements in the array which sum to x.
Array A can contain duplicate elements.
While printing a pair, print the smaller element first.
That is, if a valid pair is (6, 5) print "5 6".
There is no constraint that out of 5 pairs which have to be printed in 1st line. 
You can print pairs in any order, just be careful about the order of elements in a pair.
Input format :
Line 1 : Integer N (Array size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x
Output format :
Line 1 : Pair 1 elements (separated by space)
Line 2 : Pair 2 elements (separated by space)
Line 3 : and so on
Constraints :
1 <= N <= 1000
1 <= x <= 100
*/

#include <bits/stdc++.h> 
using namespace std;


/*
previous solution O(n^2)

void pairSum(int a[], int size, int val) {
   for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {   if (a[i] + a[j] == val)
            {
                if (a[i] >= a[j])
                {
                    cout << a[j] << " " << a[i] << endl;
                    continue;
                }
                else 
                {
                    cout << a[i] << " " << a[j] << endl;
                    continue;
                }
            }
    	}
   }
}

*/

/*
int binarySearch(int arr[], int l, int r, int x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (arr[m] == x) 
            return m; 
  
        if (arr[m] < x) 
            l = m + 1;
        else
            r = m - 1; 
    } 
    return -1; 
} 


void pairSum(int a[], int size, int val) {
    sort(a,a+size);
    int x,y;

    for (int i = 0; i < size; ++i){
    	if ((val - a[i]) > 0){
    		x = binarySearch(a,0,size-1,val - a[i]);
    		if(x > 0){
    			(a[x] > a[i])?cout<<a[i]<<" "<<a[x]<<endl : cout<<a[x]<<" "<<a[i]<<endl  ;
    		}else{
    			continue;
    		}	
    	}
    }
}
*/


int main(){
	int a[1000];
	int n,val;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cin>>val;
	pairSum(a,n,val);
	return 0;
}