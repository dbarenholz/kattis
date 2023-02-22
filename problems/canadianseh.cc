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

int main() {
    // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin, s);

    if (s.substr(s.size() - 3, 3) == "eh?") {
        OUT("Canadian!")
    } else {
        OUT("Imposter!")
    }


    return 0;
}
