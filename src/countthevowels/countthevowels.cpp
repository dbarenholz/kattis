#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array
int main()
{
  map<char, int> mp;
  string s;
  while (s.empty())
  {
    getline(cin, s);
  }

  for (char c : s)
  {
    mp[tolower(c)]++;
  }

  cout << mp['a'] + mp['e'] + mp['i'] + mp['u'] + mp['o'] << "\n";
  return 0;
}
