#include <iostream>

int main() {
  int K, q, r, b, k, p;
  std::cin >> K >> q >> r >> b >> k >> p;
  std::cout << 1 - K << " " << 1 - q << " " << 2 - r << " " << 2 - b << " " << 2 - k << " " << 8 - p << "\n";
  return 0;
}