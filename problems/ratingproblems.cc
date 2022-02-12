#include <iostream>
#include <iomanip>

int main() {
  int n, k;
  std::cin >> n >> k;

  int sum = 0;
  for (int i = 0; i < k; i++) {
    int r;
    std::cin >> r;
    sum += r;
  }

  float min_result = (float) (sum - 3.0 * (n - k)) / (float) n;
  float max_result = (float) (sum + 3.0 * (n - k)) / (float) n;

  std::cout << std::fixed << std::setprecision(4) << min_result << " " << max_result << "\n";
  return 0;
}
