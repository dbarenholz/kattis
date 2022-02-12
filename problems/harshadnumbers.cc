#include <iostream>

#define ll long long


const ll MAX = 1e9 + 1;

int main() {
  ll n;
  std::cin >> n;

  for (ll i = n; i < MAX; i++) {
    ll m = i;
    ll s = 0;

    while (m > 0) {
      s += m % 10;
      m = (m - (m % 10)) / 10;
    }

    if (i % s == 0) {
      std::cout << i << "\n";
      return 0;
    }

  }

  return -1;
}