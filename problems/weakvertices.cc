#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

void processGraph(int n)
{
  vec<vec<bool>> G;

  for (int i = 0; i < n; i++)
  {
    vec<bool> g;
    for (int i = 0; i < n; i++)
    {
      bool x;
      cin >> x;
      g.push_back(x);
    }
    G.push_back(g);
  }

  for (int i = 0; i < n; i++)
  {
    bool weak = true;

    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < n; k++)
      {
        if (G[i][k] && G[i][j] && G[j][k] && i != k && i != j && j != k)
        {
          weak = false;
        }
      }
    }

    if (weak)
    {
      cout << i << " ";
    }
  }
  cout << "\n";
}

int main()
{
  int n;
  while (cin >> n && n != -1)
  {
    processGraph(n);
  }
  return 0;
}
