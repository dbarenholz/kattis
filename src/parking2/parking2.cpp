#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main()
{
  int t, n, m;
  cin >> t;
  while (t-- > 0)
  {
    int min = 100, max = -1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      cin >> m;
      if (m > max)
      {
        max = m;
      }
      if (m < min)
      {
        min = m;
      }
    }

    cout << (max - min) * 2 << "\n";
  }
  return 0;
}
