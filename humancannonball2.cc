#include <iostream>
#include <cmath>

#define ld long double

bool safe(ld v0, ld angle, ld x1, ld h1, ld h2) {
  const ld G = 9.81;
  const ld PI = 3.14159265358979;
  ld theta = (angle * PI) / 180;

  ld t = (x1) / (v0 * std::cos(theta));
  ld y = (v0 * t * std::sin(theta)) - ((G * t * t) / 2);
  return ((y < h2 - 1) && (y > h1 + 1));
}

int main() {
  int t;
  std::cin >> t;
  while (t-- > 0) {
    ld v0, angle, x1, h1, h2;
    std::cin >> v0 >> angle >> x1 >> h1 >> h2;
    std::cout << (safe(v0, angle, x1, h1, h2) ? "Safe" : "Not Safe") << "\n";
  }
  return 0;
}

