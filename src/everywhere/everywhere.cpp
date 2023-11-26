#include <iostream>
#include <string>
#include <set>

int main() {

  int t;
  std::cin >> t;
  while (t-- > 0) {
    int n;
    std::cin >> n;

    std::set<std::string> C;

    while (n-- > 0) {
      std::string c;
      std::cin >> c;
      C.insert(c);
    }

    std::cout << C.size() << "\n";
  }
  return 0;
}
