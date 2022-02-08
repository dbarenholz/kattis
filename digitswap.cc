#include <iostream>
#include <string>
#include <charconv>


int swap(int n) {
  char c[2 + sizeof(char)];
  std::to_chars(c, c + 2, n);
  std::swap(c[0], c[1]);
  return std::stoi(c);
}


int main() {
  int x;
  std::cin >> x;
  std::cout << swap(x) << "\n";
  return 0;
}