#include <iostream>
#include <string>

void findSmiley(std::string s, std::string e) {
  std::size_t found = s.find(e);
  while (found != std::string::npos) {
    std::cout << found << "\n";
    found = s.find(e.c_str(), found + 1, e.length());
  }
}

int main() {
  std::string s;
  std::cin >> s;

  findSmiley(s, ":)");
  findSmiley(s, ":-)");
  findSmiley(s, ";)");
  findSmiley(s, ";-)");
  return 0;
}