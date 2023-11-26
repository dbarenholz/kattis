#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
  os << '{';
  string sep;
  for (const T &x : v) os << sep << x, sep = ", ";
  return os << '}';
}

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define len(x) (int((x).size()))
#define print(x) cout << #x << " = " << x << endl;
#define print_all(i, a, n)      \
  for (int i = 0; i < n; i++) { \
    cout << a[i] << " ";        \
  }
#define sortall(x) sort(all(x))
#define ld long double
#define ll long long
#define INF (ll)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define vec vector
#define arr array
#define str string
#define FOR(i, from, to_excl, in) for (int i = from; i < to_excl; i += in)
#define RFOR(i, from, to_incl, in) for (int i = from; i >= to_incl; i -= in)
#define WHILE(n) while (n-- > 0)
#define readline(s)   \
  string s;           \
  while (s.empty()) { \
    getline(cin, s);  \
  }
#define _map(X, fn) transform(all(X), X.begin(), fn);

void solve() {
  readline(s);
  vec<str> cards;
  set<str> cardsSet;
  FOR(i, 0, len(s), 3) {
    cards.push_back(s.substr(i, 3));
    cardsSet.emplace(s.substr(i, 3));
  }

  if (len(cards) != len(cardsSet)) {
    cout << "GRESKA\n";
    return;
  }

  _map(cards, [](str s) { return s.at(0); });
  map<char, int> mp;
  for (auto c : cards) {
    mp[c.at(0)]++;
  }

  cout << 13 - mp['P'] << " " << 13 - mp['K'] << " " << 13 - mp['H'] << " " << 13 - mp['T'] << "\n";
}

int main() {
  // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // int tc, i;
  // cin >> tc;
  // WHILE(tc) {
  solve();
  // }

  return 0;
}
