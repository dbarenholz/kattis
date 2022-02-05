#include <iostream>
#include <cmath>

#define ll long long

int main() {
  int n;
  std::cin >> n;
  ll result = std::pow(std::pow(2, n) + 1, 2);
  std::cout << result << "\n";
  return 0;
}
