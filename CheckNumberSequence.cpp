/*Check Number sequence

You are given S a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
That is, in the sequence if numbers are decreasing, they can start increase at one point. And once number starts increasing, they cannot decrease at any point further.
Sequence made up of only increasing numbers or only decreasing numbers is a valid sequence. So in both the cases, print true.
You just need to print true/false. No need to split the sequence.
Input format :
Line 1 : Integer n
Line 2 : n integers (separated by space)
Output Format :
"true" or "false" (without quotes)*/

#include <bits/stdc++.h> 
using namespace std;
int main(){
	//status 0 = decreasing & status 1 = increasing
	int n,num,pNum ,status=0; cin>>n;
	bool val = false;
	cin>>pNum;
	for (int i = 1; i < n; ++i)
	{
		cin>>num;
		
		  if(pNum == num){
            val = false;
            break;
        }
		else if(pNum < num ){
			 if (status == 0)
			 {
			 	status = 1;
			 	val = true;
			 }
		}
		else if(pNum > num ){
			if (status == 0){
			 status = 0;
			 val = true;	
			}
			else if (status == 1){
				val = false;
				break;
			}
		}
		pNum = num;
	}
	(val)?cout<<"true" : cout<< "false";

	return 0;
}