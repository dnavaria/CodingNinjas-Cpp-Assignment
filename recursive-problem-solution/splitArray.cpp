/*
Split Array
Send Feedback
Given an integer array A of size N, check if the input array can be splitted in two parts such that -
- Sum of both parts is equal
- All elements in the input, which are divisible by 5 should be in same group.
- All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
- Elements which are neither divisible by 5 nor by 3, can be put in any group.
Groups can be made with any set of elements, i.e. elements need not to be continuous. And you need to consider each and every element of input array in some group.
Return true, if array can be split according to the above rules, else return false.
Note : You will get marks only if all the test cases are passed.
Input Format :
Line 1 : Integer N (size of array)
Line 2 : Array A elements (separated by space)
Output Format :
true or false
Constraints :
1 <= N <= 50
Sample Input 1 :
2
1 2
Sample Output 1 :
false
Sample Input 2 :
3
1 4 3
Sample Output 2 :
true
*/
#include <iostream>

using namespace std;


int findSum(int *a,int n){
	int sum=0;
	for(int i = 0; i <n ; i++){ 
		sum+=a[i];
	}
	return sum;
}

bool splitArray(int *input, int size) {
	
	int d3[50];
	int d5[50];
	int doth[50];

	int x=0,y=0,z=0;

	for(int i = 0; i <size ; i++){ 
		if(input[i] % 3 == 0){
			d3[x] == input[i];
			x++;
		}else if(input[i] % 5 == 0){
			d5[y] == input[i];
			y++;
		}else{
			doth[z] == input[i];
			z++;
		}
	}

	int s1=0,s2=0;
	int d3s,d5s,dos;
	if (x!=0){
		d3s=findSum(d3,x);
	}
	if (y!=0){
		d5s=findSum(d5,y);
	}
	bool result = false;
	for(int i = 0; i <z ; i++){ 
		if (d3s+doth[i]==d5s+doth[i+1])
		{
			result = true;
		}else if(d5s+doth[i]==d3s+doth[i+1]){
			result = true;
		}else{
			result = false;
	}

	return result;
	}
}

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}
