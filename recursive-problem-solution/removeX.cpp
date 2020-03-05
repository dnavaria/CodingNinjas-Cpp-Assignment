/*
Remove X

Given a string, compute recursively a new string where all 'x' chars have been removed.
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:
*/

// Change in the given string itself. So no need to return or print anything
#include <string.h>
void removeX(char input[]) {
	if(input[0]=='\0'){
		return;
	}
    removeX(input+1);
	if(input[0]=='x'){
		for(int i = 0; i <strlen(input) ; i++){ 
			input[i] = input[i+1];
		}
	}	

}

