#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> tokenize(std::string s, char d) {
  std::vector<std::string> tokens;
  int start = 0;
  int end = s.find(d);
  while (end != -1) {
    tokens.push_back(s.substr(start, end - start));
    start = end + 1;
    end = s.find(d, start);
  }
  tokens.push_back(s.substr(start, end - start));
  return tokens;
}

int main() {
  std::string input;
  std::cin >> input;
  std::vector<std::string> T = tokenize(input, '-');

  for (std::string &t: T) {
    std::cout << t[0];
  }
  std::cout << "\n";

  return 0;
}