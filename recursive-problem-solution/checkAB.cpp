/*
Check AB

Suppose you have a string made up of only 'a' and 'b'. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
Sample Input:
abb
Sample Output:
true
*/

bool cab(char input[]){
	if(input[0]=='\0'){
		return true;
	}

	if(input[0]!='a'){
		return false;
	}

	if(input[1]!='\0' && input[2]!='\0' ){
		if(input[1]=='b' && input[2]=='b' ){
			return cab(input+3);
		}		
	}
    return cab(input+1);
}

bool checkAB(char input[]) {
	if(input[0]!='a'){
		return false;
	}
	else{
		return cab(input);
	}
}


