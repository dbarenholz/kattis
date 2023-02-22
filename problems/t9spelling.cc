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
#define _map(X, fn) transform(all(X), X.begin(), fn);

str solve() {
    str res = "";
    str s;
    getline(cin, s);

    map<char, str> mp = {
            {' ', "0"},

            {'a', "2"},
            {'b', "22"},
            {'c', "222"},

            {'d', "3"},
            {'e', "33"},
            {'f', "333"},

            {'g', "4"},
            {'h', "44"},
            {'i', "444"},

            {'j', "5"},
            {'k', "55"},
            {'l', "555"},

            {'m', "6"},
            {'n', "66"},
            {'o', "666"},

            {'p', "7"},
            {'q', "77"},
            {'r', "777"},
            {'s', "7777"},

            {'t', "8"},
            {'u', "88"},
            {'v', "888"},

            {'w', "9"},
            {'x', "99"},
            {'y', "999"},
            {'z', "9999"}
    };


    for (auto c: s) {
        str add = mp[c];
        if (res[res.size() - 1] == add[0]) {
            res += " ";
        }
        res += mp[c];
    }

    return res;
}

int main() {
    // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc;
    cin >> tc;
    str s;
    getline(cin, s); // ignore newline
    FOR(i, 0, tc, 1) {
        str res = solve();
        cout << "Case #" << i + 1 << ": " << res << "\n";
    }

    return 0;
}
