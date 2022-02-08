#include <iostream>
#include <string>

int main() {
  int count = 0;
  std::string s;
  std::cin >> s;
  std::size_t found = s.find('(');
  std::string a = s.substr(0, found);
  std::string b = s.substr(found + 1);
  for (auto c: a) {
    if (c == '|') {
      count++;
    }
  }

  for (auto c: b) {
    if (c == '|') {
      count--;
    }
  }

  std::cout << (count == 0 ? "correct" : "fix") << "\n";

  return 0;
}

