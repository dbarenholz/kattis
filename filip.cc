#include <iostream>
#include <string>
#include <set>
#include <charconv>

/**
 * Swaps first and last digits of a 3-digit integer.
 * @param n integer to swap
 * @return reversed integer
 */
int reversed(int n) {
  char c[3 + sizeof(char)];
  std::to_chars(c, c + 3, n);
  std::swap(c[0], c[2]);
  return std::stoi(c);
}


int main() {
  int a, b;
  std::cin >> a >> b;
  a = reversed(a);
  b = reversed(b);
  std::cout << (a > b ? a : b) << "\n";
}

/*
 * Kattis does not understand std::reverse(...).
 *
int main() {
  int A, B;
  std::string a, b;
  std::cin >> a >> b;
  std::reverse(begin(a), end(a));
  std::reverse(begin(b), end(b));
  A = std::stoi(a);
  B = std::stoi(b);

  std::cout << (A > B ? A : B) << "\n";

  return 0;
}

 */