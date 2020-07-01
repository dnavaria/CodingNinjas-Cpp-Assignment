#include <bits/stdc++.h>

#define op1(x) cout<<#x<<"="<<x<<'\n'
#define op2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define op3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

int multiplyNumbers(int m, int n)
{
    if (n == 1)
    {
        return m;
    }

    return m + multiplyNumbers(m, n - 1);

}

int countZeros(int n)
{
    if(n == 0 )
        return 0;

    int ans = 0;
    if(n % 10 == 0)
        ans = 1;

    return ans + countZeros(n / 10);
}

double geometricSum(int k)
{
    if(k == 0)
    {
        return 1;
    }
    double ans = 1 / (pow(2, k));
    return ans + geometricSum(k - 1);
}



bool helpPalindrome(char input[], int startIndex, int endIndex)
{
    if(input[0] == '\0' || input[1] == '\0'
      )
    {
        return true;
    }
    if(startIndex >= endIndex)
    {
        return true;
    }

    if(input[startIndex] == input[endIndex])
    {
        helpPalindrome(input, startIndex + 1, endIndex - 1);
    }
    else
    {
        return false;
    }
    return false;
}

bool checkPalindrome(char input[])
{
    return helpPalindrome(input, 0, strlen(input) - 1);
}

void printVector(const vector<int> &arr)
{
    for(auto i = arr.begin(); i != arr.end(); i++)
        cout << *i << " ";
}


struct hash_pair
{
    template<class T1, class T2>
    size_t operator()(const pair<T1, T2> &p)const
    {
        auto hash1 = hash<T1> {}(p.first);
        auto hash2 = hash<T2> {}(p.second);
        return hash1 ^ hash2;
    }
};

void countFrequency(int *a, int n)
{

    unordered_map<int, pair<int, int>> um;

    rep(i, n)
    {
        if(um.count(a[i]) > 0)
        {
            int key = a[i];
            pair<int, int> p;
            p.first = (um.at(a[i])).first + 1;
            p.second = (um.at(a[i])).second;
            um.erase(a[i]);
            um.insert(make_pair(key, p));
            continue;
        }
        pair<int, int> p;
        p.first = 1;
        p.second = i;
        um.insert(make_pair(a[i], p));
    }

    pair<int, int> maxFreq;
    maxFreq.first = 0;
    maxFreq.second = -1;
    for (unordered_map<int, pair<int, int>>::iterator i = um.begin(); i != um.end(); ++i)
    {
        // cout<<i->first<<" -> "<<(i->second).first<<" , "<<(i->second).second<<"\n";
        if((i->second).first > maxFreq.first)
        {
            maxFreq.second = i->first;
            maxFreq.first = (i->second).first;
        }

    }
    bool val = false;
    vector<pair<int, int>> v;
    for (unordered_map<int, pair<int, int>>::iterator i = um.begin(); i != um.end(); ++i)
    {
        if(maxFreq.first != (i->second).first)
        {
            val = true;
            break;
        }
    }
    if(val)
    {
        return maxFreq.second;
    }
    else
    {
        for (unordered_map<int, pair<int, int>>::iterator i = um.begin(); i != um.end(); ++i)
        {
            if(maxFreq.first == (i->second).first)
            {
                pair<int, int> p;
                p.first = (i->second).first;
                p.second = (i->second).second;
                v.push_back(p);
            }
        }
        int minIndex = INT_MAX;
        for (vector<pair<int, int>> ::iterator i = v.begin(); i != v.end(); ++i)
        {
            if(minIndex > i->second)
            {
            	minIndex = i->second;
            }
        }
        return a[minIndex];

    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int input[100000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    countFrequency(input, n);
    //multiplication => recursion
    // int m, n;
    // cin >> m >> n;
    // cout << multiplyNumbers(m, n) << endl;

    // count Zeros => recursion
    // int n;
    // cin >> n;
    // cout << countZeros(n) << endl;

    // Geometric Sum => recursion
    // int k;
    // cin >> k;
    // cout << fixed << setprecision(5);
    // cout << geometricSum(k) << endl;

    // Check Palindrome
    // char input[50];
    // cin >> input;

    // if(checkPalindrome(input))
    // {
    // 	cout << "true" << endl;
    // }
    // else
    // {
    //	cout << "false" << endl;
    // }
    return 0;
}