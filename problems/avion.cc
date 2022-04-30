#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
  bool found = false;
  string s;
  for (size_t i = 0; i < 5; i++)
  {
    cin >> s;

    if (s.find("FBI") != string::npos)
    {
      found = true;
      cout << i + 1 << " ";
    }
  }

  if (found)
  {
    cout << "\n";
  }
  else
  {
    cout << "HE GOT AWAY!\n";
  }

  return 0;
}
