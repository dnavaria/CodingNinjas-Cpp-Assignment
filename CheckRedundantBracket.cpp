/*
Check redundant brackets

Given a string mathematical expression, return true if redundant brackets are present in the expression. Brackets are redundant if there is nothing inside the bracket or more than one pair of brackets are present.
Assume the given string expression is balanced and contains only one type of bracket i.e. ().
Note: You will not get partial score for this problem. You will get marks only if all test cases are passed.
Input Format :
String s (Expression)
Output Format :
true or false
Sample Input 1:
((a + b)) 
Sample Output 1:
true
Sample Input 2:
(a+b) 
Sample Output 2:
false
*/

#include <stack>
#include <cstring>

bool checkRedundantBrackets(char *ip) {
	stack<char> s;

	bool flag = false;
	for(int i = 0; i <strlen(ip) ; i++){ 
		if (ip[i]!=')'){
			s.push(ip[i]);
		}
		else{
			while(s.top()!='('){
				s.pop();
				flag = true;
				if (s.empty()){
					break;
				}
			}
			if (s.empty()){
				continue;
			}
			if (flag){
				s.pop();
				flag = false;
			}
			else{
				return true;
			}
		}
	}
	return false;
}