#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int a, b;
  cin >> a >> b;

  if (a + b == 0)
  {
    cout << "Not a moose\n";
    return 0;
  }

  if (a == b)
  {
    cout << "Even " << (a + b) << "\n";
  }
  else
  {
    cout << "Odd " << (int)(2 * max(a, b)) << "\n";
  }

  return 0;
}
