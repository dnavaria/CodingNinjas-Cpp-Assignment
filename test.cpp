#include <bits/stdc++.h>
#include <sys/time.h>

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

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *a = temp;
}

long getTimeinMicroSeconds() {
  struct timeval start;
  gettimeofday(&start, NULL);
  return start.tv_sec * 1000000 + start.tv_usec;
}

void printArray(int *a, int n) {
  for (int i = 0; i < n; i++) cout << a[i] << " ";

  cout << endl;
}
int secondLargest(int *a, int n) {
  if (n <= 1) {
    return INT_MIN;
  }
  int l = INT_MIN, sl = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] > l) {
      sl = l;
      l = a[i];
    } else if (l == sl) {
      return INT_MIN;
    }
  }
  return sl;
}

void Rotate(int *a, int step, int n) {
  //	for(int i=0;i<n;i++){ int x = (a[i] + step) % n;  if(x == 0){a[i] =
  // n;}else{ a[i] = x;}}
  int *ax = new int[n];
  int z = 0;
  for (int i = step; i < n; i++) {
    ax[z] = a[i];
    z++;
  }
  for (int i = 0; i <= step; i++) {
    ax[z] = a[i];
    z++;
  }
  for (int i = 0; i < n; i++) {
    a[i] = ax[i];
  }
}
int FindSortedArrayRotation(int a[], int n) {
  int j = 1;
  for (int i = 0; i < n; i++) {
    if (a[i] < a[j]) {
      j++;
    } else {
      return i;
    }
  }

  return 0;
}

int length(char a[]) {
  int i = 0;
  while (a[i] != '\0') {
    ++i;
  }
  return i;
}

void reverse(char a[], int start, int end) {
  int i = start, j = end - 1;
  char x;
  while (i < j) {
    x = a[i];
    a[i] = a[j];
    a[j] = x;
    i++;
    j--;
  }
}

void reverseStringWordWise(char a[]) {
  int st = 0, end = 0;
  int len = length(a);
  reverse(a, 0, len);
  int i = 0;
  for (; i < len; i++) {
    if (a[i] == ' ') {
      reverse(a, st, i);
      st = i + 1;
    }
  }
  if (a[i] == '\0') {
    reverse(a, st, i);
  }
}

void subs(char a[], int x, int n) {
  for (int i = x; i < n; i++) {
    for (int j = x; j <= i; j++) {
      cout << a[j];
    }
    cout << endl;
  }
}

void printSubstring(char a[]) {
  int n = strlen(a);
  int c = 0;
  for (int i = 0; a[i] != '\0'; i++) {
    subs(a, i, n);
  }
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int findIndex(int *a, int n, int x, int c) {
  if (c > n - 1) {
    return -1;
  }

  if (a[c] == x) {
    return c;
  } else {
    return findIndex(a, n, x, c + 1);
  }
}
int index(int *a, int n, int x) { return findIndex(a, n, x, 0); }

int lastIndex(int *a, int n, int x) {
  if (n < -1) {
    return -1;
  }

  if (a[n] == x) {
    return n;
  } else {
    return lastIndex(a, n - 1, x);
  }
}

int countZero(int n) {
  if (n <= 9) {
    if (n == 0)
      return 1;
    else
      return 0;
  }

  int last = n % 10;
  int ans = 0;
  if (last == 0) ans = 1;
  return ans + countZero(n / 10);
}

double geometricSum(int k) {
  if (k <= 0) {
    return 1;
  }
  double geo = 1 / pow(2, k);
  return geo + geometricSum(k - 1);
}

bool checkPalindrome(char a[]) { return false; }

// count words in a string
int countWordsString(string str) {
  stringstream ss(str);
  string x;
  int count = 0;
  while (ss >> x) {
    count++;
  }

  return count;
}

// print frequencies of individual characters in a string
void printFrequencies(string str) {
  stringstream ss(str);
  map<string, int> wordFrequency;
  string word;

  while (ss >> word) wordFrequency[word]++;

  map<string, int>::iterator i;
  for (i = wordFrequency.begin(); i != wordFrequency.end(); i++) {
    cout << i->first << " -> " << i->second << "\n";
  }
}

string removeWhiteSpaces(string str) {
  stringstream ss(str);
  string temp;
  str = "";

  while (!ss.eof()) {
    // Extracting string word by word from stream
    ss >> temp;
    str = str + temp;
  }

  // Alternate method using getline function
  /*

  while(getline(ss,temp,' ')){
          str = str + temp;
  }

  */

  return str;
}

vector<int> parseInts(string str) {
  // Complete this function
  vector<int> v;
  stringstream ss(str);
  string s;

  while (getline(ss, s, ',')) {
    int x = stoi(s);
    v.push_back(x);
  }
  return v;
}

void print(int a) {
  if (a > 0) {
    cout << -(a) << " " << a << '\n';
  } else {
    cout << a << " " << -(a) << '\n';
  }
}

/* First approach
void pairSum(int *input, int n) {
  unordered_map<int, int> um;

  for (int i = 0; i < n;) {
    if (um.count(input[i]) == 0) {
      if (um.count(-input[i]) > 0) {
        int n = um[-(input[i])];
        while (n >= 1) {
          print(input[i]);
          n--;
        }
      }
      um[input[i]] = 1;
      i++;
    } else if (um.count(input[i]) > 0) {
      if (um.count(-input[i]) > 0) {
        int n = um[(input[i])];
        if (um[-(input[i])] > um[input[i]]) {
          n = um[-(input[i])];
        }
        while (n >= 1) {
          print(input[i]);
          n--;
        }
      }
      um[input[i]]++;
      i++;
    }
  }
}

*/

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
  // int a[]={1,2,3,3,4};
  // int n = sizeof(a)/sizeof(int);
  // cout.precision(8); cout<<lastIndex(a,n,2);

  // counting words
  // string str = "This whole line is a string";
  // cout<<countWordsString(str);

  /*printing frequencies of individual words in a string*/
  // string str = "This string is also a string";
  // printFrequencies(str);

  // removing whitespaces from a string
  // cout<<removeWhiteSpaces(str);

  // string str;
  // cin >> str;
  // vector<int> integers = parseInts(str);
  // for (int i = 0; i < integers.size(); i++) {
  // cout << integers[i] << "\n";
  // }

  return 0;
}
