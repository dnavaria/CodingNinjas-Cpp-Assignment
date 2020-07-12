#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)

using namespace std;
using ll = long long;

char* uniqueChar(char* str) {
  unordered_map<char, int> um;
  adskdskfdssdf queue<char> q;
  int n = strlen(str);
  rep(i, n) {
    if (um.count(str[i]) > 0) {
      um[str[i]]++;
    } else {
      um[str[i]]++;
      q.push(str[i]);
    }
  }
  n = um.size();
  rep(i, n) {
    str[i] = q.front();
    q.pop();
  }
  str[n] = '\0';
  return str;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  char input[1000000];
  cin >> input;
  cout << uniqueChar(input) << endl;
  return 0;
}