#include <iostream>

int main() {
  int x, n, ans;
  std::cin >> x >> n;
  ans = x;

  while (n-- > 0) {
    int p;
    std::cin >> p;

    ans += (x - p);
  }

  std::cout << ans << std::endl;
  return 0;
}
