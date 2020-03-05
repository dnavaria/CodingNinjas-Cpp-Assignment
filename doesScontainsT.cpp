/*
Does s contain t ?

Given two string s and t, write a function to check if s contains all characters of t (in the same order as they are in string t).
Return true or false.
Do it recursively.
E.g. : s = “abchjsgsuohhdhyrikkknddg” contains all characters of t=”coding” in the same order. So function will return true.
Input Format :
Line 1 : String s
Line 2 : String t
Output Format :
true or false
Sample Input 1 :
abchjsgsuohhdhyrikkknddg
coding
Sample Output 1 :
true
Sample Input 2 :
abcde
aeb
Sample Output 2 :
false

Main Code

Code Pair

1
​
2
​
3
​
4
bool checksequenece(char large[] , char*small) {
5
​
6
}

*/

#include<iostream>
using namespace std;

void helper(char large[] ,int n1, char *small, int n2, bool &val){
	if(large[n1] =='\0'){
		if(small[n2] == '\0'){
			val = true;
			return;
		}else{
			val = false;
			return ;
		}
	}

	if(large[n1] == small[n2]){
		n1++;
		n2++;
	}else{
		n1++;
	}

	helper(large,n1,small,n2,val);
}

bool checksequenece(char large[] , char*small) {
	bool ans;
	helper(large,0,small,0,ans);
	return ans;
}


int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}
