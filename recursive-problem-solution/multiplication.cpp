/*
Multiplication (Recursive)

Given two integers m & n, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format : m and n (in different lines)

Sample Input :
3 
5
Sample Output -
15*/
int multiplyNumbers(int m, int n) {
	if (n==0)
	{
		return 0;
	}
	return m+multiplyNumbers(m,n-1);
}


