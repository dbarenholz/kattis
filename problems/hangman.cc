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
  int max_guess = 10;
  str word, guesses;
  cin >> word >> guesses;

  map<char, bool> mp;
  for (char c : word) {
    mp[c] = false;
  }

  int num_guess = 0;
  for (char c : guesses) {
    // Kattis does not use cpp20; contains does not exist
    // if (mp.contains(c)) {
    if(mp.find(c) != mp.end()) {
      mp[c] = true;
    } else {
      num_guess += 1;
    }

    bool failure = false;
    for (auto e : mp) {
      if (!e.second) {
        failure = true;
      }
    }

    if (!failure) {
      cout << "WIN\n";
      return;
    }

    if (num_guess > 9) {
      cout << "LOSE\n";
      return;
    }
  }
}

int main() {
  // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  // int tc;
  // cin >> tc;
  // WHILE(tc) {
  solve();
  // }

  return 0;
}
