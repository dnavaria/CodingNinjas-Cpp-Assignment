#include <bits/stdc++.h>

#define op1(x) cout << #x << "=" << x << '\n'
#define op2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define op3(x, y, z)                                                       \
  cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z \
       << '\n'
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)

using namespace std;
using ll = long long;

/*
Code : Pair Sum to 0

Given a random integer array A of size N. Find and print the pair of elements in the array which sum to 0.
Array A can contain duplicate elements.
While printing a pair, print the smaller element first.
That is, if a valid pair is (6, -6) print "-6 6". There is no constraint that out of 5 pairs which have to be printed in 1st line. You can print pairs in any order, just be careful about the order of elements in a pair.
Input format :
Line 1 : Integer N (Array size)
Line 2 : Array elements (separated by space)
Output format :
Line 1 : Pair 1 elements (separated by space)
Line 2 : Pair 2 elements (separated by space)
Line 3 : and so on
Constraints :
0 <= N <= 10^4
Sample Input:
5
2 1 -2 2 3
Sample Output :
-2 2
-2 2
*/

void print(int a) {
  if (a > 0) {
    cout << -(a) << " " << a << '\n';
  } else {
    cout << a << " " << -(a) << '\n';
  }
}
void pairSum(int *input, int n) {
  unordered_map<int, int> um;
  rep(i, n) { um[input[i]]++; }

  vector<pair<int, int>> v;
  unordered_map<int, int>::iterator iter = um.begin();
  for (; iter != um.end();) {
    if (iter->second == 0) {
      iter++;
    } else if (iter->first == 0) {
      pair<int, int> p;
      p.first = iter->first;
      p.second = iter->second;
      v.push_back(p);
      iter->second = 0;
      iter++;
    } else if (iter->second != 0 && um.count(-(iter->first)) > 0) {
      pair<int, int> p;
      p.first = iter->first;
      p.second = iter->second * um[-(iter->first)];
      iter->second = 0;
      um[-(iter->first)] = 0;
      v.push_back(p);
      iter++;
    } else {
      iter++;
    }
  }
  for (vector<pair<int, int>>::iterator i = v.begin(); i != v.end();) {
    if (i->second > 0) {
      print(i->first);
      i->second = i->second - 1;
    } else if (i->second == 0) {
      i++;
    }
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  int *arr = new int[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  pairSum(arr, n);

  delete[] arr;

  return 0;
}