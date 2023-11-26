#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  string s;
  while (s.empty())
  {
    getline(cin, s);
  }
  s = s.replace(s.find('-'), 1, "");
  int c[] = {4, 3, 2, 7, 6, 5, 4, 3, 2, 1};
  int sum = 0;
  for (int i = 0; i < s.size(); i++)
  {
    sum += c[i] * ((int)s[i] - 48);
  }

  cout << (sum % 11 == 0) << "\n";

  return 0;
}
