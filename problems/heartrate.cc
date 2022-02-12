#include <iostream>
#include <iomanip>

int main() {
  int n;
  std::cin >> n;

  while (n-- > 0) {
    int b;
    double p;
    std::cin >> b >> p;

    // funny variable names are funny. FML.
    double f = ((b - 1) / p) * 60;
    double m = ((b) / p) * 60;
    double l = ((b + 1) / p) * 60;

    std::cout << std::fixed << std::setprecision(4) << f << " " << m << " " << l << "\n";
  }


  return 0;
}