#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  ld x;
  cin >> x;
  ll ans = (ll) round(((1000 * (5280.0) / (4854.0))) * x);
  cout << ans << "\n";
  return 0;
}

