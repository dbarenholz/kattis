#include <iostream>
#include <iomanip>

#define ld long double

int main() {
  ld ans = 0;
  float c, x, y;
  int l;
  std::cin >> c >> l;
  while (l-- > 0) {
    std::cin >> x >> y;
    ans += (x * y);
  }
  std::cout << std::fixed << std::setprecision(6) << ans*c << "\n";

  return 0;
}