#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
  int g, t, n, w, W = 0;
  cin >> g >> t >> n;
  while (n-- > 0)
  {
    cin >> w;
    W += w;
  }
  cout << (9*((g - t) / 10))-W << "\n";
  return 0;
}
