#include <iostream>
#include <string>

int main() {
  std::string m;
  int d;
  std::cin >> m >> d;

  if ((m == "OCT" && d == 31) || (m == "DEC" && d == 25)) {
    std::cout << "yup" << "\n";
  } else {
    std::cout << "nope" << "\n";
  }

  return 0;
}