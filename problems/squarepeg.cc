#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  ll l, r;
  cin >> l >> r;

  // diagonal of square < diameter of circle to fit
  if (sqrt(l * l + l * l) < 2 * r)
  {
    cout << "fits\n";
  }
  else
  {
    cout << "nope\n";
  }

  return 0;
}
