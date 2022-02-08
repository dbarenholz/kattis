#include <iostream>

int main() {
  int a, b, c, d, e, score;
  std::cin >> a >> b >> c >> d >> e >> score;

  if (score < e) {
    std::cout << "F\n";
    return 0;
  }

  if (score < d) {
    std::cout << "E\n";
    return 0;
  }

  if (score < c) {
    std::cout << "D\n";
    return 0;
  }

  if (score < b) {
    std::cout << "C\n";
    return 0;
  }

  if (score < a) {
    std::cout << "B\n";
    return 0;
  }

  std::cout << "A\n";
  return 0;
}