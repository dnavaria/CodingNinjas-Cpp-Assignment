/*All Prime Numbers

Given an integer N, print all the prime numbers that lies in between 2 to N (both inclusive).
Print the prime numbers in different lines.*/

#include <bits/stdc++.h> 

using namespace std;


int main(){
	
	int n; cin>>n;
	
	bool b[n+1] ;
	memset(b, true, sizeof(b));
	
	for (int i = 2; i*i<=n; i++){
		if (b[i] == true){
			for(int j = i*i; j <=n ; j+=i){
				b[j] = false;
			}
		}
	}	
	
	
	for (int p=2; p<=n; p++) 
	       if (b[p]) 
	          cout << p << " "; 
	return 0;
}