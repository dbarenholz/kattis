#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
  string s, w;
  map<string, int> mp;
  std::getline(cin, s);

  // For some reason, it finds the last token TWICE at all times.
  // So let's do the dumb thing and account for that
  istringstream ss(s);
  while (ss)
  {
    ss >> w;
    mp[w]++;
  }
  mp[w]--; // account for reading last token twice

  pair<string, int> mx_elem = make_pair("", -1);
  map<string, int>::iterator it;
  for (it = mp.begin(); it != mp.end(); ++it)
  {
    if (it->second > mx_elem.second)
    {
      mx_elem = make_pair(
          it->first,
          it->second);
    }
  }

  if (mx_elem.second > 1)
  {
    cout << "no\n";
  }
  else
  {
    cout << "yes\n";
  }

  return 0;
}
