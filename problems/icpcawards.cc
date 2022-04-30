#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int n, count = 0;
  cin >> n;
  string out = "";
  map<string, bool> mp;

  while (n-- > 0)
  {
    string a, b;
    cin >> a >> b;

    if (!mp[a] && count < 12)
    {
      mp[a] = true;
      out += a + " " + b + "\n";
      count++;
    }
  }
  cout << out;
  return 0;
}
