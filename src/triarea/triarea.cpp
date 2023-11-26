#include <iostream>
#include <iomanip>

#define ld long double
#define ll long long


int main() {
  ll h, b;
  std::cin >> h >> b;
  std::cout << std::setprecision(7) << ((ld) (h * b)) / (2) << "\n";
  return 0;
}

