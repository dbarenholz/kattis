#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

string lower(string s)
{
  string r(s);
  transform(s.begin(), s.end(), r.begin(), [](unsigned char c)
            { return tolower(c); });
  return r;
}

int main()
{
  int n, count = 0;
  string response = "I must watch Star Wars with my daughter";
  string pink = "pink";
  string rose = "rose";
  cin >> n;

  while (n-- > 0)
  {
    string s;
    cin >> s;
    s = lower(s);

    if ((s.find(pink) != string::npos) | (s.find(rose) != string::npos))
    {
      count += 1;
    }
  }

  if (count > 0)
  {
    cout << count << "\n";
  }
  else
  {
    cout << response << "\n";
  }

  return 0;
}
