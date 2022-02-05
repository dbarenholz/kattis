#include <iostream>

#define ll long long

int main() {

  int n;
  ll s = 0;

  std::cin >> n;
  while (n-- > 0) {
    int x;
    std::cin >> x;
    s += x;
  }
  std::cout << s << "\n";
  return 0;
}
