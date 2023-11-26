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
  vec<int> X;
  while (n-- > 0)
  {
    int x;
    cin >> x;
    X.push_back(x);
  }

  auto it = X.rbegin();
  while (it != X.rend())
  {
    cout << *it << "\n";
    it++;
  }

  return 0;
}
