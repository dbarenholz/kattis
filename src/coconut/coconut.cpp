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


enum PlayerState {
    Folded,
    Fists,
    PalmDown
};


int main() {
    // https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num_syllables, num_players;
    cin >> num_syllables >> num_players;

    // Initialize map of players with their state
    vec<pair<int, PlayerState>> players(num_players);
    FOR(i, 1, num_players + 1, 1) {
        players[i - 1] = {i, PlayerState::Folded};
    }

    // Simulate the game
    int idx = 0;
    while (players.size() > 1) {
        idx = (idx + num_syllables - 1) % players.size();

        if (players[idx].second == PlayerState::Folded) {
            players[idx].second = PlayerState::Fists;
            players.insert(players.begin() + idx, {players[idx].first, PlayerState::Fists});
        } else if (players[idx].second == PlayerState::Fists) {
            players[idx].second = PlayerState::PalmDown;
            idx += 1;
        } else {
            players.erase(players.begin() + idx);
        }
    }


    // Return the only key that's left in the map.
    OUT(players.begin()->first);
    return 0;
}
