/*
Minimum bracket Reversal

Given a string expression which consists only ‘}’ and ‘{‘. The expression may not be balanced. You need to find the minimum number of bracket reversals which are required to make the expression balanced.
Return -1 if the given expression can't be balanced.
Input Format :
String S
Output Format :
Required count
Sample Input 1 :
{{{
Sample Output 1 :
-1
Sample Input 2 :
{{{{}}
Sample Output 2 :
1
*/


#include <stack>
#include <cstring>

int countBracketReversals(char input[]){
	int len = strlen(input);
    int count = 0;
	if(len%2!=0){
		return -1;
	}else{
		stack<char> s;
		int i=0;
		while(input[i]!='\0'){
			if(input[i] == '{'){
				s.push(input[i]);
			}else if(input[i] == '}' && !(s.empty()) && s.top() == '{'){
				s.pop();
			}else if(input[i] == '}' && s.empty() ){
				s.push(input[i]);
			}else if(s.empty() == false && s.top()!='{'){
				s.push(input[i]);
			}

			i++;
		}
		
		while(s.empty()==false){
			char c1 = s.top();
			s.pop();
			char c2 = s.top();
			s.pop();
			if(c1 == c2){
				count++;
			} else if(c1 != c2){
				count+=2;
			}
		}
	}
return count;
}
