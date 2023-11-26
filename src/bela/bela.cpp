#include <iostream>

int main() {
  int n;
  std::cin >> n;
  n *= 4;

  char b;
  std::cin >> b;

  int ans = 0;
  while (n-- > 0) {
    std::pair<char, char> p;
    std::cin >> p.first >> p.second;

    switch (p.first) {
      case 'A':
        ans += 11;
        break;
      case 'K':
        ans += 4;
        break;
      case 'Q':
        ans += 3;
        break;
      case 'J':
        ans += (b == p.second) ? 20 : 2;
        break;
      case 'T':
        ans += 10;
        break;
      case '9':
        ans += (b == p.second) ? 14 : 0;
        break;
      default:
        break;
    }
  }
  std::cout << ans << "\n";
  return 0;
}

