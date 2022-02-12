#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  ll w, n;
  cin >> w >> n;
  ll count = 0;
  while (n-- > 0) {
    ll x, y;
    cin >> x >> y;
    count += x * y;
  }
  cout << count / w;
  return 0;
}

