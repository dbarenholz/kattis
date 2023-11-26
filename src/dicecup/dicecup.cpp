#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  a += 1;
  b += 1;

  if (a >= b) {
    int t = a;
    a = b;
    b = t;
  }
  while (a <= b) {
    std::cout << a << "\n";
    a++;
  }

  return 0;
}