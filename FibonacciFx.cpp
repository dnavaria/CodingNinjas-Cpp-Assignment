/*Fibonacci Number

Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
Input Format :
Integer N
Output Format :
true or false*/
#include <bits/stdc++.h> 
using namespace std;


bool checkMember(int n){
    int a = 1, b = 1;
    int temp;
    if(n==1){
        return true;
    }
    else{
      if(n>=2){
      	for (int i = 3; i <= n; i++){
          temp = b;
          b = a + b;
        	if(n==b){
            return true;
          }
          a = temp;
          }  
       } 
    }
return false;
}

//bool checkMember(int n){
//    int *a; 
//    bool result = false;
//	if(n == 0 || n == 1){
//        return true;
//    }
//	else if(n>=2){
//        a = new int[n];
//        int val=1,val1=1,temp;
//	    for (int i = 0; i < n; ++i){
//	    	a[i] = val+val1;
//	    	val1 = val;
//	    	val = a[i];
//	    }
//        result = binary_search(a,a+(n-1),n);
//    }
//	
//return result;
//}


int main(){
	int n;
	cin>>n;
	cout<<checkMember(n);
	return 0;
}