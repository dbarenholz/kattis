#include <iostream>
#include <vector>

int main() {
  std::string chars;
  std::cin >> chars;

  // ball indicator
  std::vector<bool> cups = { true, false, false };
  for (char &c: chars) {
    switch (c) {
      case 'A': {
        std::swap(cups[0], cups[1]);
        break;
      }
      case 'B' : {
        std::swap(cups[1], cups[2]);
        break;
      }
      case 'C': {
        std::swap(cups[0], cups[2]);
        break;
      }
      default:
        // should not happen
        break;
    }
  }

  for (int i = 0; i < cups.size(); i++) {
    if (cups[i]) {
      std::cout << i + 1 << "\n";
    }
  }

  return 0;
}

