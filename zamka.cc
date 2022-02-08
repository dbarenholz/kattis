#include <iostream>
#include <vector>
#include <set>


#define ld long double
#define ll long long


ll sumDigits(ll x) {
  ll s = 0;
  while (x > 0) {
    s += x % 10;
    x = x / 10;
  }
  return s;
}

int main() {
  ll l, d, x;
  std::cin >> l >> d >> x;
  std::set<ll> ANS;
  while (l <= d) {
    if (sumDigits(l) == x) {
      ANS.insert(l);
    }
    l++;
  }

  const auto[n, m] = std::minmax_element(ANS.begin(), ANS.end());
  std::cout << *n << "\n" << *m << "\n";
  return 0;
}

