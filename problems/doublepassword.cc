#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array
int main()
{
  string a, b;
  cin >> a >> b;

  int res = 1;

  for (int i = 0; i < 4; i++)
  {
    if (a[i] != b[i])
    {
      res *= 2;
    }
  }

  cout << res << "\n";
  return 0;
}
