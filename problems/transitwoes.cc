#include <iostream>
#include <vector>

int main() {
  int s, t, n;
  std::cin >> s >> t >> n;
  std::vector<int> D, B, C;
  for (int i = 0; i < n + 1; i++) {
    int d;
    std::cin >> d;
    D.push_back(d);
  }

  for (int i = 0; i < n; i++) {
    int b;
    std::cin >> b;
    B.push_back(b);
  }

  for (int i = 0; i < n; i++) {
    int c;
    std::cin >> c;
    C.push_back(c);
  }

  int allowed = t - s;
  int current = 0;

  for (int i = 0; i < n; i++) {
    // walk
    current += D.at(i);
    // wait for bus
    current += (current % C.at(i));
    // bus
    current += B.at(i);
  }
  // final walk
  current += D.at(n);

  std::cout << (current < allowed ? "yes" : "no") << "\n";
  return 0;
}

