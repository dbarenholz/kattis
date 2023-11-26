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
  vec<int> A, B;

  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    A.push_back(t);
  }

  for (int i = 0; i < n - 1; i++)
  {
    int t;
    cin >> t;
    B.push_back(t);
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  vec<int> v(1);
  vec<int>::iterator it = std::set_difference(A.begin(), A.end(), B.begin(), B.end(), v.begin());

  v.resize(it - v.begin());

  cout << *v.begin() << "\n";
  return 0;
}
