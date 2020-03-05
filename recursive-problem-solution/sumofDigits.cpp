/*
Sum of digits (recursive)

Write a recursive function that returns the sum of the digits of a given integer.
Sample Input :
12345
Sample Output :
15
*/

int sumOfDigits(int n) {
	if(n == 0){
		return 0;
	}

	int ans = n%10;
	return ans+sumOfDigits(n/10);

}


