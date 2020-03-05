/*
Staircase

A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
Input format :
Line 1 : Integer N (No. of steps) 
Output Format :
Line 1 : Integer W i.e. Number of possible ways
Constraint :
(1 <= N <= 30)
Sample Input 1:
4
Sample Output :
7
*/

int staircase(int n){
	if(n==0){
		return 1;
	}
    if(n == -1 || n == -2){
        return 0;
    }

	int x = staircase(n-1);
	int y = staircase(n-2);
	int z = staircase(n-3);

	return x+y+z;
}