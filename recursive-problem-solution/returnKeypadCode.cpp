/*
Return Keypad Code

Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : The order of strings are not important.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/
#include <string>
using namespace std;

string db[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int keypad(int num, string output[]){

    if(num <= 1){
    	output[0] = db[0];
    	return 1;
    }

    int digit = num%10;
    int smallOutputSize = keypad(num/10,output);
    string options = db[digit];
    int optionsLength = options.length();
    
    for(int i = 0; i <optionsLength-1 ; i++){ 
    	for(int j = 0; j <smallOutputSize ; j++){ 
    		output[j+(i+1)*smallOutputSize] = output[j];
    	}
    }

    int k=0;

    for(int i = 0; i <optionsLength ; i++){ 
    	for(int j = 0; j <smallOutputSize ; j++){ 
    		output[k] += options[i];
    		k++;
    	}
    }
 	return smallOutputSize*optionsLength;
}
 