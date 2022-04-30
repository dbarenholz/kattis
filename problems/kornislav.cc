#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define v vector

int main()
{
  vector<int> x;
  for (int i = 0; i < 4; i++)
  {
    int _;
    cin >> _;
    x.push_back(_);
  }
  sort(x.begin(), x.end());

  cout << x[0] * x[2] << "\n";
  return 0;
}
