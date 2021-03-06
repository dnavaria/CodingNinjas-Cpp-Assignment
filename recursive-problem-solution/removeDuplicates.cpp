/*
Remove Duplicates Recursively

Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string
Constraints :
1 <= Length of String S <= 10^3
Sample Input :
aabccba
Sample Output :
abcba
*/

#include <bits/stdc++.h> 

void removeConsecutiveDuplicates(char *input) {
	if(input[0]=='\0'){
		return;
	}

	if(input[0]==input[1]){
		for(int i = 0; i <strlen(input) ; i++){ 
			input[i] = input[i+1];
		}
	}

	removeConsecutiveDuplicates(input+1);
}