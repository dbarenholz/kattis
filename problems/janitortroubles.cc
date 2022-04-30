#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  // https://en.wikipedia.org/wiki/Brahmagupta%27s_formula
  ld s;
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  s += a + b + c + d;
  s /= 2;

  ld k = sqrt((s - a) * (s - b) * (s - c) * (s - d));

  cout << std::fixed << std::setprecision(6) << k << "\n";
  return 0;
}
