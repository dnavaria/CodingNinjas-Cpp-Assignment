/*
Pair star

Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
xxyy
Sample Output 2:
x*xy*y
Sample Input 3 :
aaaa
Sample Output 3:
a*a*a*a
*/

// Change in the given string itself. So no need to return or print the changed string.
#include <bits/stdc++.h> 

void pairStar(char input[]) {
    if(input[0]=='\0'){
    	return;
    }

    if(input[0]==input[1]){
    	for(int i = strlen(input); i >0 ; i--){ 
    		input[i+1] = input[i];
    	}
    	input[1]='*';
    }

    pairStar(input+1);
}
