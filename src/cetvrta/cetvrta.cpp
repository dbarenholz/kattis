#include <iostream>

#define ll long long

int main() {
  ll x1, y1, x2, y2, x3, y3, x4, y4;
  std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  // get x-coordinate
  if (x1 == x2) {
    x4 = x3;
  } else if (x2 == x3) {
    x4 = x1;
  } else {
    x4 = x2;
  }

  // get y-coordinate
  if (y1 == y2) {
    y4 = y3;
  } else if (y2 == y3) {
    y4 = y1;
  } else {
    y4 = y2;
  }

  std::cout << x4 << " " << y4 << "\n";
  return 0;
}