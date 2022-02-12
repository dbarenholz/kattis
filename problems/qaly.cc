#include <iostream>
#include <iomanip>

int main() {
  int n;
  std::cin >> n;

  double sum = 0.0;
  while (n-- > 0) {
    double q, y;
    std::cin >> q >> y;
    sum += q * y;
  }

  std::cout << std::fixed << std::setprecision(4) << sum << "\n";
  return 0;
}
