#include <iostream>
#include <string>
#include <set>

int main() {

  std::string s;
  std::cin >> s;
  std::set<char> sc;

  for (char c: s) {
    sc.insert(c);
  }

  std::cout << (sc.size() == s.size()) << "\n";

  return 0;
}
