#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;

  if (s.find("ss") != std::string::npos) {
    std::cout << "hiss" << "\n";
  } else {
    std::cout << "no hiss" << "\n";
  }

  return 0;
}