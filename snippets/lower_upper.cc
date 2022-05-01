
#include <bits/stdc++.h>

using namespace std;

string lower(string s)
{
  string r(s);
  transform(s.begin(), s.end(), r.begin(), [](unsigned char c)
            { return tolower(c); });
  return r;
}

string upper(string s)
{
  string r(s);
  transform(s.begin(), s.end(), r.begin(), [](unsigned char c)
            { return toupper(c); });
  return r;
}