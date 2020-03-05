/*

Check Palindrome (recursive)

Check if a given String S is palindrome or not (using recursion). Return true or false.
Input Format :
String S
Output Format :
true or false
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
*/

#include <bits/stdc++.h> 
using namespace std;
void code(char a[],int k,int l, bool &val){
	if(a[l]=='\0' && a[k]=='\0'){val=true; return;}
	
	if(a[k] == a[l]){ val = true;}
	else{val = false; return ;}
	
	if(val==true){code(a,k+1,l-1,val); }
	else{val = false; return;}
	
}
bool checkPalindrome(char a[]){
	int k = 0;
	int l = strlen(a);
	bool val ;
   	code(a,k,l-1,val);
	return val;
}