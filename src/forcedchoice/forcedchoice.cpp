#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int n, p, s;
  cin >> n >> p >> s;
  while (s-- > 0)
  {
    bool kept = false;
    int m;
    cin >> m;
    while (m-- > 0)
    {
      int t;
      cin >> t;

      if (p == t)
      {
        kept = true;
        cout << "KEEP\n";
      }
    }

    if (!kept)
    {
      cout << "REMOVE\n";
    }
  }
  return 0;
}
