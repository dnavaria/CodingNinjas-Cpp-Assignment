/*
Print Keypad Combinations Code

Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
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
#include <iostream>
#include <string>
using namespace std;

string db[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


void pk(int num,string output){
	if (num==0){
		cout<<output<<endl;
		return;
	}
	int digit = num%10;
	string options = db[digit];
	for(int i = 0; i <options.length() ; i++){ 
		pk(num/10,options[i]+output);
	}

}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    
	pk(num,"");

}
