#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  string s;
  cin >> s;
  map<char, int> mp{ };
  for (auto c: s) {
    mp[c]++;
  }

  int m = min({ mp['T'], mp['C'], mp['G'] });
  cout << pow(mp['T'], 2) + pow(mp['C'], 2) + pow(mp['G'], 2) + (7 * m) << "\n";
  return 0;
}

