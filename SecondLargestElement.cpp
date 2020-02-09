/* Second Largest in array
Send Feedback
Given a random integer array of size n,
find and return the second largest element present in the array.
If n <= 1 or all elements are same in the array, return -2147483648 i.e. -2^31.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Second largest element
Constraints :
1 <= N <= 10^6
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
13
Sample Input 2:
5
9 3 6 2 9
Sample Output 2:
6
Sample Input 3:
2
6 6
Sample Output 3:
-2147483648 */

#include <bits/stdc++.h>

using namespace std;

bool same(int a[], int n)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[a[i]]++;

    if (m.size() == 1)
        return true;
    else
        return false;
}

int FindSecondLargest(int a[], int n)
{
    int smax = a[0], ssmax = INT_MIN;

    if (n <= 0)
    {
        return INT_MAX;
    }
    if (same(a, n))
    {
        return INT_MAX;
    }
    for (int i = 1; i < n; i++)
    {
        if (smax < a[i])
        {
            ssmax = smax;

            smax = a[i];
        }
        else if (a[i] > ssmax && a[i] != smax)
        {
            ssmax = a[i];
        }
    }

    return ssmax;
}

int main()
{
    int ar[] = {2, 4, 3, 5, 2};
    int n = sizeof(ar) / sizeof(int);

    cout << FindSecondLargest(ar, n);
    return 0;
}