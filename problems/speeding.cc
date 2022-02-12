#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  int n, t, d;
  cin >> n;
  ll ans = -1;
  int T[n], D[n];

  for (int i = 0; i < n; ++i) {
    cin >> t >> d;
    T[i] = t;
    D[i] = d;
  }

  for (int i = 1; i < n; ++i) {
    ll temp = floor((ld) (D[i] - D[i - 1]) / ((T[i] - T[i - 1])));
    ans = max(ans, temp);
  }
  cout << ans << "\n";
  return 0;
}

