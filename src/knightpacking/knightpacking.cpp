#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x: v) os << sep << x, sep = ", ";
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
#define FOR(i, from, to_excl, inc) for (int i = from; i < to_excl; i += inc)
#define RFOR(i, from, to_incl, inc) for (int i = from; i >= to_incl; i -= inc)
#define WHILE(n) while (n-- > 0)
#define OUT(x) cout << x << "\n";
#define EVEN(x) (x % 2 == 0)
#define readline(s)   \
  string s;           \
  while (s.empty()) { \
    getline(cin, s);  \
  }
#define _map(X, fn) transform(all(X), X.begin(), fn);

void solve() {
}

int main() {
    // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if EVEN(n) {
        OUT("second")
    } else {
        OUT("first")
    }

    return 0;
}
