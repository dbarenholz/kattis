#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int res = 7;
  int n;
  cin >> n;
  while (n-- > 0)
  {
    string s;
    cin >> s >> s;

    if (s.find("o") != string::npos)
    {
      res = min(res + 1, 10);
    }
    if (s.find("e") != string::npos)
    {
      res = max(res - 1, 0);
    }
  }

  cout << res << "\n";
  return 0;
}
