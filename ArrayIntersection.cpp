/*Array intersection

Given two random integer arrays of size m and n, print their intersection.
That is, print all the elements that are present in both the given arrays.
Input arrays can contain duplicate elements.
Note : Order of elements are not important
Input format :
Line 1 : Array 1 Size
Line 2 : Array 1 elements (separated by space)
Line 3 : Array 2 Size
Line 4 : Array 2 elements (separated by space)
Output format :
Print intersection elements in different lines*/

#include <bits/stdc++.h> 
using namespace std;
/* SOL - 1
void intersection(int input1[], int input2[], int size1, int size2) {
	int n;	
	bool ar3[n+1];
	memset(ar3,false,n+1);

	if(size1>size2){
		n = *max_element(input1,input1+size1);
		for (int i = 0; i < size1; ++i)
			ar3[input1[i]] = true;

		for (int i = 0; i < size2; ++i){
			if(ar3[input2[i]]){
				cout<<input2[i]<<endl;
			}
		}
	}else{
		n = *max_element(input2,input2+size2);
		for (int i = 0; i < size2; ++i)
			ar3[input2[i]] = true;

		for (int i = 0; i < size1; ++i){
			if(ar3[input1[i]]){
				cout<<input1[i]<<endl;
			}
		}
	}
}
*/ 
/*SOL - 2
void intersection(int ar1[], int ar2[], int size1, int size2) {
	if(size1>size2){
		int *tempV = ar1;
		ar1 = ar2;
		ar2 = tempV;

		int temp = size1;
		size1 = size2;
		size2 = temp;
	}
	sort(ar1,ar1+size1);
	for (int i = 0; i < size2; ++i)
	{
		if(binary_search(ar1,ar1+size1,ar2[i])){
			cout<<ar2[i]<<endl;
		}
	}

}*/

void intersection(int input1[], int input2[], int size1, int size2) {
	for(int i = 0; i < size1; i++) 
        { for(int j = 0; j < size2; j++)
            {     if(input1[i] == input2[j]) 
                    {     cout << input1[i] << endl;
     input2[j] = INT_MIN; break; 
            }
        }
    }
}

int main(){
	int ar1[] = {2,6,8,5,4,3};
	int ar2[] = {2,3,4,7,8};

	intersection(ar1,ar2,6,5);
	return 0;
}



