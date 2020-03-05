/*
Count Zeros

Given an integer n, count and return the number of zeros that are present in the given integer using recursion.
Input Format :
Integer n
Output Format :
No. of 0s
Sample Input :
10204
Sample Output
2
*/
void count(int n,int &k){
	if(n==0){
		return;
	}
	if(n%10==0){
		k++;
	}
	count(n/10,k);

}

int countZeros(int n) {
    int k=0;
    count(n,k)
    return k;
}


