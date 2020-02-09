#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x = 10;

    vector<int> v{1, 9, 5, 7, 2};

    sort(begin(v), end(v));
  
    if (std::is_sorted(std::begin(v), std::end(v))) {
      x=20;
    }
    	std::for_each(std::begin(v), std::end(v), [](int &n) {
        std::cout << " " <<n;
	});
    return 0;
}
