#include <iostream>

int main() {
  int n, s = 0, c = 0;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    int x;
    std::cin >> x;
    if (x >= 0) {
      s += x;
    } else {
      c += 1;
    }
  }

  std::cout << (((double) (s) / (n - c))) << "\n";
  return 0;
}