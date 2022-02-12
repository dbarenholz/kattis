#include <iostream>

int main() {
  int n;
  std::cin >> n;
  std::string ans = (n%2==0) ? "Bob" : "Alice";

  std::cout << ans << std::endl;
  return 0;
}
