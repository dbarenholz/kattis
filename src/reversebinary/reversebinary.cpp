#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  ll n;
  cin >> n;
  string s = bitset<64>(n).to_string().substr(bitset<64>(n).to_string().find('1'));
  std::reverse(begin(s), end(s));
  cout << stoi(s, nullptr, 2) << "\n";
  return 0;
}