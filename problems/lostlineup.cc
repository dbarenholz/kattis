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
#define FOR(i, from, to_excl, in) for (int i = from; i < to_excl; i += in)
#define RFOR(i, from, to_incl, in) for (int i = from; i >= to_incl; i -= in)
#define WHILE(n) while (n-- > 0)
#define readline(s)   \
  string s;           \
  while (s.empty()) { \
    getline(cin, s);  \
  }

void solve() {
  ll num_people;
  cin >> num_people;
  num_people -= 1;

  map<int, int> mp;
  mp[0] = 1;
  FOR(i, 2, num_people + 2, 1) {
    int p;
    cin >> p;
    mp[p + 1] = i;
  }
  for (auto elem : mp) {
    cout << elem.second << " ";
  }
  cout << "\n";
}

int main() {
  // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  solve();

  return 0;
}
