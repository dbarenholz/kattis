#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  string t;
  cin >> t;

  arr<arr<char, 4>, 4> items;
  vec<vec<char>> clock;

  for (int i = 0; i < t.size(); i++)
  {
    int d = (int)t[i] - 48;
    bitset<4> b(d);
    string binary = b.to_string('.', '*');
    for (int j = 0; j < binary.size(); j++)
    {
      items[i][j] = binary[j];
    }
  }

  for (int i = 0; i < 4; i++)
  {
    string line;
    for (int j = 0; j < 4; j++)
    {
      line += items[j][i];
      line += " ";
      if (j == 1)
      {
        line += "  ";
      }
    }
    cout << line.substr(0, line.size() - 1) << "\n";
  }

  return 0;
}
