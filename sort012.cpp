/* Sort 0 1 2
Send Feedback
You are given an integer array containing only 0s, 1s and 2s. 
Write a solution to sort this array using one scan only.
You need to change in the given array itself. 
So no need to return or print anything.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Updated array elements (separated by space)
Constraints :
1 <= n <= 10^6
Sample Input:
7
0 1 2 0 2 0 1
Sample Output:
0 0 0 1 1 2 2  */


void sort012(int a[], int n)  {  

	int t = 0;
    int z = 0;
    int tw = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            t = a[z];
            a[z] = a[i];
            a[i] = t;
            z++;
        }
       
      
    }
     for (int i = z; i < n; i++)
    {
        if (a[i] == 1)
        {
            t = a[z];
            a[z] = a[i];
            a[i] = t;
            z++;
        }
       
      
    }
}
