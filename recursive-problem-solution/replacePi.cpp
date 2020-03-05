/*
Replace pi (recursive)

Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
*/
// Change in the given string itself. So no need to return or print anything

#include<string.h>
void replacePi(char input[]) {
	if(input[0] == '\0'){
		return;
	}

	if(input[0] == 'p' && input[1] == 'i'){
		for(int i = strlen(input); i >1; i--){ 
			input[i+2] = input[i];
		}
		input[0] = '3'; 
		input[1] = '.';
		input[2] = '1';
		input[3] = '4';
	}
	replacePi(input+1);
}
