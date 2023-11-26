#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  int h, m, a, b;
  cin >> h >> m;

  a = m + 15;
  b = m - 45;
  if (m >= 45) {
    cout << h << " " << b << "\n";
  } else if (h == 0) {
    cout << 23 << " " << a << "\n";
  } else {
    cout << h - 1 << " " << a << "\n";
  }
  return 0;
}

