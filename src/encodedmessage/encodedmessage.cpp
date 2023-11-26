#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

string solve(string s)
{
  string result;
  int n = sqrt(s.size());

  char matrix[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      matrix[i][j] = s.at(j + n * i);
    }
  }

  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = 0; j < n; j++)
    {
      result += matrix[j][i];
    }
  }

  return result;
}

int main()
{
  int n;
  cin >> n;
  while (n-- > 0)
  {
    string s;
    cin >> s;

    cout << solve(s) << "\n";
  }
  return 0;
}
