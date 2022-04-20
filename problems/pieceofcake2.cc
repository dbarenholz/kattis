#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main() {
  int n, h, v, t = 4;
  cin >> n >> h >> v;
  ll ans;

  if (n - h > h) {
    if (n - v > v) {
      ans = (n - h) * (n - v) * t;
    } else {
      ans = (n - h) * v * t;
    }
  } else {
    if (n - v > v) {
      ans = h * (n - v) * t;
    } else {
      ans = h * v * t;
    }
  }
  cout << ans << "\n";
  return 0;
}

