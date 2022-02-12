#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  int n, q;
  cin >> n >> q;
  map<int, int> mp;
  for (int i = 0; i < n; ++i) {
    int l;
    cin >> l;
    mp[i + 1] = l;
  }

  while (q-- > 0) {
    int type;
    cin >> type;
    if (type == 1) {
      // 1 C X: Company C moves location to X
      int c, x;
      cin >> c >> x;
      mp[c] = x;
    } else {
      //2 A B: Output distance between companies A, B.
      int a, b;
      cin >> a >> b;
      cout << abs(mp[a] - mp[b]) << "\n";
    }

  }
  return 0;
}

