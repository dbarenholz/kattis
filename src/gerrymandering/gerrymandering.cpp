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
    return (a / gcd(a, b)) * b;
}

ll floorMod(const ll a, const ll b) {
    return (a % b + b) % b;
}

vector<string> tokenize(const string &s, char c) {
    vector<string> T;
    stringstream ss = stringstream(s);

    for (string t; getline(ss, t, c);) {
        T.push_back(t);
    }

    return T;
}

string lower(string s) {
    string r(s);
    transform(s.begin(), s.end(), r.begin(), [](unsigned char c) { return tolower(c); });
    return r;
}

string upper(string s) {
    string r(s);
    transform(s.begin(), s.end(), r.begin(), [](unsigned char c) { return toupper(c); });
    return r;
}

ld efficiencyGap(ll total_votes, ll total_wasted_a, ll total_wasted_b) {
    return abs(total_wasted_a - total_wasted_b) / (ld) total_votes;
}

int main() {
    fast_io

    int p, d;
    cin >> p >> d;

    map<int, pair<int, int>> districtVotes;

    FOR(i, 1, p + 1, 1) {
        int di, va, vb;
        cin >> di >> va >> vb;

        // Put in map if it doesn't exist, otherwise increase voting counts
        if (districtVotes.find(di) == districtVotes.end()) {
            districtVotes[di] = pair<int, int>{va, vb};
        } else {
            districtVotes[di].first += va;
            districtVotes[di].second += vb;
        }
    }

    vec<pair<int, tuple<char, int, int>>> results;

    ll V = 0, WA = 0, WB = 0;
    for (auto entry: districtVotes) {
        int district = entry.first;
        int votesA = entry.second.first;
        int votesB = entry.second.second;

        int total_votes = votesA + votesB;
        V += total_votes;

        char winner = votesA > votesB ? 'A' : 'B';

        int wasted_votes_a = 0;
        int wasted_votes_b = 0;

        if (winner == 'A') {
            wasted_votes_b += votesB;
            wasted_votes_a += votesA - (int) floor(total_votes / 2) - 1;
        }

        if (winner == 'B') {
            wasted_votes_a += votesA;
            wasted_votes_b += votesB - (int) floor(total_votes / 2) - 1;
        }

        WA += wasted_votes_a;
        WB += wasted_votes_b;

        tuple<char, int, int> t{winner, wasted_votes_a, wasted_votes_b};
        results.emplace_back(district, t);
    }

    // Sort it so we're printing in the correct order
    std::sort(
            results.begin(),
            results.end(),
            [](auto a, auto b) -> bool {
                return a.first < b.first;
            });

    for (auto entry: results) {
        char winner = get<0>(entry.second);
        int A = get<1>(entry.second);
        int B = get<2>(entry.second);

        cout << winner << " " << A << " " << B << "\n";
    }

    cout << efficiencyGap(V, WA, WB) << "\n";

    return 0;
}
