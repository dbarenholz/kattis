#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main() {
  map<char, int> mp;
  for (int i = 0; i < 5; ++i) {
    string t;
    cin >> t;
    mp[t.at(0)]++;
  }
  auto mx = max_element(mp.begin(), mp.end(), [](auto a, auto b) -> bool {
    return a.second < b.second;
  })->second;
  cout << mx << "\n";
  return 0;
}

