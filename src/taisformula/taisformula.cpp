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
  vec<ld> V;
  vec<ll> T;
  while (n-- > 0)
  {
    ll t;
    ld v;
    cin >> t >> v;

    T.push_back(t);
    V.push_back(v);
  }

  ld sum = 0;
  for (int i = 1; i < V.size(); i++)
  {
    sum += (((V[i - 1] + V[i]) / 2) * (T[i] - T[i - 1]) / 1000.000000);
  }

  cout << fixed << setprecision(6) <<sum << "\n";
  return 0;
}
