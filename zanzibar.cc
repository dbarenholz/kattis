#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  int t;
  cin >> t;
  while (t-- > 0) {
    ll ans = 0;
    ll _x;
    cin >> _x;
    while (true) {
      ll x;
      cin >> x;
      if (x == 0) {
        break;
      } else {
        ans += (x - (2 * _x)) < 0 ? 0ll : (x - (2 * _x));
        _x = x;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}

