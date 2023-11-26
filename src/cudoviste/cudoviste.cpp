#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int r, c;
  cin >> r >> c;

  vec<vec<char>> map;

  for (int i = 0; i < r; i++)
  {
    vec<char> row;
    for (int j = 0; j < c; j++)
    {
      char col;
      cin >> col;
      row.push_back(col);
    }
    map.push_back(row);
  }

  vec<int> res = {0, 0, 0, 0, 0};

  for (int i = 0; i < r - 1; i++)
  {
    for (int j = 0; j < c - 1; j++)
    {
      int cars = 0;

      if (map[i][j] == '#')
      {
        continue;
      }
      if (map[i + 1][j] == '#')
      {
        continue;
      }
      if (map[i][j + 1] == '#')
      {
        continue;
      }
      if (map[i + 1][j + 1] == '#')
      {
        continue;
      }

      if (map[i][j] == 'X')
      {
        cars++;
      }
      if (map[i + 1][j] == 'X')
      {
        cars++;
      }
      if (map[i][j + 1] == 'X')
      {
        cars++;
      }
      if (map[i + 1][j + 1] == 'X')
      {
        cars++;
      }
      res[cars]++;
    }
  }

  for (int r : res)
  {
    cout << r << "\n";
  }

  return 0;
}
