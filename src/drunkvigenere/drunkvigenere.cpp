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

str decrypt(str msg, str key) {
    str decrypted;

    FOR(i, 0, msg.length(), 1) {
        char to_decrypt = msg[i];
        int shift_by = key[i] - 'A';

        int new_value;
        // Do the opposite of encrypt!
        if (i % 2 != 0) {
            // shift forwards
            new_value = to_decrypt + shift_by;
            if (new_value > 'Z')
                new_value -= 26;


        } else {
            // shift backwards
            new_value = to_decrypt - shift_by;
            if (new_value < 'A')
                new_value += 26;

        }

        char decrypted_character = (char) new_value;
        decrypted += decrypted_character;
    }

    return decrypted;
}

int main() {
    fast_io

    str encrypted_message, key;

    getline(cin, encrypted_message);
    getline(cin, key);

    OUT(decrypt(encrypted_message, key))


    return 0;
}
