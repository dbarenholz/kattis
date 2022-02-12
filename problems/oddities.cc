#include <iostream>

int main() {

  int n;
  std::cin >> n;
  while (n-- > 0) {
    int x;
    std::cin >> x;
    auto r = (x % 2 == 0) ? "even" : "odd";
    std::cout << x << " is " << r << "\n";
  }

  return 0;
}
