#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

string rotate(string s)
{
  string CHARS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string t;

  int sum = 0;
  for (char c : s)
  {
    sum += CHARS.find(c);
  }

  for (char c : s)
  {
    t += CHARS.at((CHARS.find(c) + sum) % 26);
  }

  return t;
}

string merge(string a, string b)
{
  string CHARS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string t;

  for (int i = 0; i < a.size(); i++)
  {
    int rotateWithMe = CHARS.find(b.at(i));
    t += CHARS.at((CHARS.find(a.at(i)) + rotateWithMe) % 26);
  }

  return t;
}

string solve(string s)
{
  int len = s.size() / 2;
  // divide
  string s1 = s.substr(0, len);
  string s2 = s.substr(len, s.size() - 1);

  // rotate
  string t1 = rotate(s1);
  string t2 = rotate(s2);

  // merge
  return merge(t1, t2);
}

int main()
{
  string s;
  cin >> s;

  cout << solve(s) << "\n";
  return 0;
}
