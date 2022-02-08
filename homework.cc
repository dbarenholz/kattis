#include <iostream>
#include <string>
#include <vector>

#define ll long long

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
  ll ans = 0;
  std::string input;
  std::cin >> input;
  std::vector<std::string> G = tokenize(input, ';');

  for (std::string &g: G) {
    std::vector<std::string> P = tokenize(g, '-');
    if (P.size() > 1) {
      int from = std::stoi(P.at(0));
      int to = std::stoi(P.at(1));

      ans += ((to - from) + 1);
    } else {
      ans += 1;
    }

  }
  std::cout << ans << "\n";

  return 0;
}