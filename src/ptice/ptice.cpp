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
// https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define ld long double
#define ll long long
#define vec vector
#define arr array
#define str string

#define print(x) cout << #x << " = " << x << endl;
#define OUT(x) cout << x << "\n";

#define FOR(i, from, to_excl, inc) for (int i = from; i < to_excl; i += inc)
#define FORALL(item, container) for (auto item: container)
#define WHILE(n) while (n-- > 0)

const ll INF = 1e9;
const double EPS = 1e-9;
const ld PI = 3.1415926535897932384626433832795;

int adrian(string s) {
    int p = 0;
    FOR(i, 0, s.size(), 1) {
        if ((i % 3 == 0 && s[i] == 'A') || (i % 3 == 1 && s[i] == 'B') || (i % 3 == 2 && s[i] == 'C')) {
            p++;
        }
    }
    return p;
}

int bruno(string &s) {
    int p = 0;
    FOR(i, 0, s.size(), 1) {
        if ((i % 4 == 0 && s[i] == 'B') || (i % 4 == 1 && s[i] == 'A') || (i % 4 == 2 && s[i] == 'B') ||
            (i % 4 == 3 && s[i] == 'C')) {
            p++;
        }
    }
    return p;

}

int goran(string &s) {
    int p = 0;
    FOR(i, 0, s.size(), 1) {
        if ((i % 6 == 0 && s[i] == 'C') || (i % 6 == 1 && s[i] == 'C') || (i % 6 == 2 && s[i] == 'A') ||
            (i % 6 == 3 && s[i] == 'A') || (i % 6 == 4 && s[i] == 'B') || (i % 6 == 5 && s[i] == 'B')) {
            p++;
        }
    }
    return p;
}

int main() {
    fast_io

    int n;
    cin >> n;
    str ans;
    cin >> ans;

    int a = adrian(ans);
    int b = bruno(ans);
    int g = goran(ans);

    int best = max(max(a, b), g);

    OUT(best)
    if (a == best) {
        OUT("Adrian")
    }
    if (b == best) {
        OUT("Bruno")
    }
    if (g == best) {
        OUT("Goran")
    }

    return 0;
}
