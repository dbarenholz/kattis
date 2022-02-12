#include <iostream>

int main() {
  int n, ans = 0;
  std::cin >> n;
  while (n-- > 0) {
    int t;
    std::cin >> t;
    ans += (t < 0);
  }
  std::cout << ans << "\n";

  return 0;
}