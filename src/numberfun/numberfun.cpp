#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
  int t;
  cin >> t;
  while (t-- > 0)
  {
    int a, b, c;
    cin >> a >> b >> c;
    if (
        (double) a + b == c ||
        (double) a - b == c ||
        (double) a * b == c ||
        (double) a / b == c ||
        (double) b - a == c ||
        (double) b / a == c)
    {
      cout << "Possible\n";
    }
    else
    {
      cout << "Impossible\n";
    }
  }

  return 0;
}
