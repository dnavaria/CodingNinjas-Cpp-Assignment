/*Arrange Numbers in Array

Given a number n, put all elements from 1 to n in an array in order - 1,3,.......4,2.
Input Format :
 Integer n
Output Format :
 Elements of the array separated by space.*/

#include <bits/stdc++.h> 
using namespace std;

void printArray(int a[],int n){
	for (int i = 0; i < n; ++i)
		cout<<a[i]<<"->";
	cout<<endl;
}

/*
Another solution
void arrange(int a[],int n){
 
    int c = 0;
    int re = n-1;
    
    int temp =1;
    
    for (int i = 0; i < n; i++)
    {
        if (temp % 2 == 0)
        {
            a[re] = temp;
            re--;
        }
        else if (temp % 2 != 0)
        {
            a[c] = temp;
            c++;
        }
        temp++;
    }
   
}
*/


void arrange(int a[],int n){

	int *tempArr = new int[n]; 
	int nx = n/2,ny=n,iter = 0;

	  for(int i=0;i<n;i++)
        a[i] = i+1;

	for (int i = 0; i < n; ++i){
		if (a[i] % 2 != 0){
			tempArr[iter] = a[i];
			iter++;
		}
	}
	for (int i = 0; i < n; ++i){
		if (a[i] % 2 == 0){
			tempArr[ny-1] = a[i];
			ny--;
		}
	}
       for(int i=0; i<n; i++){
        a[i] = tempArr[i];
    }
    delete []tempArr;
}


int main(){

	int n; cin>>n;
	int *a = new int[n];
	printArray(a,n);
	arrange(a,n);
	printArray(a,n);

	return 0;
}