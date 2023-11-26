#include <iostream>

#define ll long long

int main() {

  int n;
  std::cin >> n;
  ll s = 0;

  for (int i = 0; i < n; i++) {
    int l;
    std::cin >> l;
    s += l;
  }

  s -= (n - 1);

  std::cout << s << "\n";

  return 0;
}
