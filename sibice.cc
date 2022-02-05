#include <iostream>

int main() {
  int n, w, h;
  std::cin >> n >> w >> h;

  while (n-- > 0) {
    int c;
    std::cin >> c;

    if (c * c <= h * h + w * w) {
      std::cout << "DA" << "\n";
    } else {
      std::cout << "NE" << "\n";
    }
  }

  return 0;
}
