#include <iostream>

int main() {
  int n;
  std::cin >> n;
  if (n % 2 != 0) {
    std::cout << "still running\n";
    return 0;
  }
  int ans = 0;
  while (n > 0) {
    int a, b;
    std::cin >> a >> b;
    ans += (b - a);
    n -= 2;
  }

  std::cout << ans << "\n";
  return 0;
}

