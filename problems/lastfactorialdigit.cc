#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
  int t, n;
  cin >> t;
  while (t-- > 0)
  {
      cin >> n;
      //   tgamma(n + 1) = factorial(n)
      cout << (((int) ceil(tgamma(n+1)))%10) << "\n";
  }
  return 0;
}
