#include <iostream>

int main() {
  int n;
  std::cin >> n;
  while (n-- > 0) {
    int k;
    std::cin >> k;
    int ans = 0;
    for (int i = 0; i < k; ++i) {
      int o;
      std::cin >> o;
      ans += o;
    }
    ans -= (k - 1);
    std::cout << ans << "\n";
  }
  return 0;
}