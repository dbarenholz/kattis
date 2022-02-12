#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

/**
 * I used this problem as an introduction to structs and custom sorting!
 */
int main() {
  struct row {
    int id;
    ll sum;
  };

  row rows[5];

  for (int i = 0; i < 5; i++) {
    ll s = 0;
    for (int j = 0; j < 4; j++) {
      int x;
      std::cin >> x;
      s += x;
    }
    rows[i] = { i + 1, s };
  }

  std::sort(rows, rows + 5, [](const auto &lhs, const auto &rhs) {
    return lhs.sum > rhs.sum;
  });

  std::cout << rows[0].id << " " << rows[0].sum << "\n";
  return 0;
}
