/*Triplet Sum

Given a random integer array and a number x. 
Find and print the triplets of elements in the array which sum to x.
While printing a triplet, print the smallest element first.
That is, if a valid triplet is (6, 5, 10) print "5 6 10". 
There is no constraint that out of 5 triplets which have to be printed on 1st line. 
You can print triplets in any order, just be careful about the order of elements in a triplet.
Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x
Output format :
Line 1 : Triplet 1 elements (separated by space)
Line 2 : Triplet 3 elements (separated by space)
Line 3 : and so on
Constraints :
1 <= N <= 1000
1 <= x <= 100*/

#include <bits/stdc++.h> 
using namespace std;
// arr - input array
// size - size of array
// x - sum of triplets


void compareElement(int ai, int aj, int ak){
			if (ai >= aj && ai >= ak)
                    {
                        if (aj <= ak)
                        {
                            cout << aj << " " << ak << " " << ai << endl;
                           
                        }
                        else if (aj >= ak)
                        {
                            cout << ak << " " << aj << " " << ai << endl;
                            
                        }
                    }
                    else if (aj >= ai && aj >= ak)
                    {
                        if (ai <= ak)
                        {

                            cout << ai << " " << ak << " " << aj << endl;
                            
                        }
                        else if (ai >= ak)
                        {

                            cout << ak << " " << ai << " " << aj << endl;
                            
                        }
                    }
                    else if (ak >= ai && ak >= aj)
                    {
                        if (ai > aj)
                        {

                            cout << aj << " " << ai << " " << ak << endl;
                            
                        }
                        else if (ai <= aj)
                        {

                            cout << ai << " " << aj << " " << ak << endl;
                            
                        }
                    }

}
void FindTriplet(int a[], int size, int val) {
  
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j+1 ; k < size; k++)
            {

                if (a[i] + a[j] + a[k] == val)
                {
                    compareElement(a[i],a[j],a[k]);
                }
            }
        }
    }
}


int main(){
	int a[1000];
	int n,val;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cin>>val;
	FindTriplet(a,n,val);
	return 0;
}