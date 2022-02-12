#include <iostream>

#define ll long long

ll sum(int x) {
  ll ans = 0;
  int n = x + 1;
  for (int i = n; i >= 2; --i) {
    ans += i;
  }
  return ans;
}

int main() {
  int p;
  std::cin >> p;
  while (p-- > 0) {
    int k, n;
    std::cin >> k >> n;
    std::cout << k << " " << sum(n) << "\n";
  }
  return 0;
}