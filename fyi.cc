#include <iostream>

int main() {
  char a, b, c;
  std::cin >> a >> b >> c;
  if (a == '5' && b == '5' && c == '5') {
    std::cout << 1 << "\n";
    return 0;
  }

  std::cout << 0 << "\n";
  return 0;
}