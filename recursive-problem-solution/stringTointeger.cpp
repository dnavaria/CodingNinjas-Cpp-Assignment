/*
String to Integer

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string (string, Eg. "1234")
Output format :
Corresponding integer (int, Eg. 1234)
Sample Input 1 :
1231
Sample Output 1:
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
*/
#include <bits/stdc++.h> 

int convert(char input[],int len){
	if(input[0]=='\0'){
		return 0;
	}
    int x = input[0] - '0';
	return (pow(10,len)*x)+convert(input+1,len-1);
}


int stringToNumber(char input[]) {
	int len = strlen(input)-1;
	return convert(input,len);

}



