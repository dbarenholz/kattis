#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int solve(int a, int b, int c)
{
  // no spaces left
  if (b - a == 1 && c - b == 1)
  {
    return 0;
  }

  // space on the left
  if (b - a == 1)
  {
    return 1 + solve(b, b + 1, c);
  }

  // space on the right
  if (c - b == 1)
  {
    return 1 + solve(a, b - 1, b);
  }

  // More than 1 space either left or right
  return 1 + max(solve(b, b + 1, c), solve(a, b - 1, b));
}

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  cout << solve(a, b, c) << "\n";

  return 0;
}
