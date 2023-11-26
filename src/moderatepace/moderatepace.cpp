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

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

int main() {
    fast_io

    ll n;
    cin >> n;
    vec<ll> my_dists(n);
    FOR(i, 0, n, 1) {
        cin >> my_dists[i];
    }
    vec<ll> dists_1(n);
    FOR(i, 0, n, 1) {
        cin >> dists_1[i];
    }
    vec<ll> dists_2(n);
    FOR(i, 0, n, 1) {
        cin >> dists_2[i];
    }


    FOR(i, 0, n - 1, 1) {
        ll a = my_dists[i];
        ll b = dists_1[i];
        ll c = dists_2[i];

        vec<ll> t = {a, b, c};
        sort(t.begin(), t.end());
        cout << t[1] << " ";
    }
    ll a = my_dists[my_dists.size() - 1];
    ll b = dists_1[dists_1.size() - 1];
    ll c = dists_2[dists_2.size() - 1];
    vec<ll> t = {a, b, c};
    sort(t.begin(), t.end());
    OUT(t[1])

    return 0;
}
