#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;
  if (n % 2 == 0) {
    n--;
  }
  while (n-- >= 0) {
    std::string s;
    std::cin >> s;
    if (n % 2 == 0) {
      std::cout << s << "\n";
    }
  }
  return 0;
}