#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  int a, b;
  cin >> a >> b;

  if (a < b) {
    cout << a << " " << b << "\n";
  } else {
    cout << b << " " << a << "\n";
  }
  return 0;
}

