#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int n;
  cin >> n;

  ll sum = 0;

  while (n-- > 0)
  {
    int k;
    cin >> k;

    if (k < 0)
    {
      sum -= k;
    }
  }

  cout << sum << "\n";
  return 0;
}
