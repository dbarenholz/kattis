#include <iostream>
#include <cmath>

#define ll long long

int main() {
  int n;
  std::cin >> n;
  ll sum = 0;

  while (n-- > 0) {
    int p;
    std::cin >> p;

    int e = p % 10;
    int b = (p - (p % 10)) / 10;

    sum += std::pow(b, e);
  }

  std::cout << sum << "\n";
  return 0;
}
