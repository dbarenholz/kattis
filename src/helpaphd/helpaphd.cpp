#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int n;
  cin >> n;
  while (n-- > 0)
  {
    string s;
    while (s.empty())
    {
      getline(cin, s);
    }

    if (s.find("P=NP") != string::npos)
    {
      cout << "skipped\n";
    }
    else
    {
      int t = s.find("+");
      int a = stoi(s.substr(0, t));
      int b = stoi(s.substr(t + 1));
      cout << a + b << "\n";
    }
  }
  return 0;
}
