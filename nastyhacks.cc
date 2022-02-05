#include <iostream>

int main() {

  int n;
  std::cin >> n;

  while (n-- > 0) {
    int r, e, c;
    std::cin >> r >> e >> c;
    if (e - c > r) {
      std::cout << "advertise\n";
    } else if (e - c == r) {
      std::cout << "does not matter\n";
    } else {
      std::cout << "do not advertise\n";
    }
  }

  return 0;
}
