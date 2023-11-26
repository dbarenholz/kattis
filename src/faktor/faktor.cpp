#include <iostream>

int main() {
  double a, i, ans;
  std::cin >> a >> i;
  ans = a * i;
  while (ans-- > 0) {
    if ((ans / a) <= i - 1) {
      break;
    }
  }

  std::cout << ans + 1 << "\n";
}