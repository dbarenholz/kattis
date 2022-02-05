#include <iostream>
#include <string>


int main() {
  std::string s;
  std::cin >> s;
  int e = 0;
  for (char const &c: s) {
    if (c == 'e') {
      e += 1;
    }
  }
  std::cout << 'h';
  for (int i = 0; i < 2 * e; i++) {
    std::cout << 'e';
  }
  std::cout << "y\n";

  return 0;
}