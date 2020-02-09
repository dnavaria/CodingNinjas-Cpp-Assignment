/*Count Characters

Write a program to count and print the total number of characters (lowercase english alphabets only), 
digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are 
entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)*/

#include <bits/stdc++.h> 
using namespace std;
int main(){
	int cCount=0, dCount=0, sCount=0;
	char ch = cin.get();

	while(ch != '$'){
		((ch>='a') && (ch<='z'))? cCount+=1 : ((ch>='0') && (ch<='9'))? dCount+=1: ((ch=='\n') || (ch=='\t') || (ch==' '))?sCount+=1:0;
		ch = cin.get();
	}

	cout<<cCount<<" "<<dCount<<" "<<sCount;

	return 0;
}