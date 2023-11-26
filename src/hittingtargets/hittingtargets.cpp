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

// Setup structs - Use empty item struct so I can create a vector of these objects
// Thank you https://stackoverflow.com/questions/36736167/c-cast-struct-dynamically-based-on-subtype
// for telling me how to do this properly (?)
struct Item {
    virtual ~Item() = default;
};

struct Point : Item {
    int x{};
    int y{};

    Point() {
        this->x = 0;
        this->y = 0;
    }

    Point(int a, int b) {
        this->x = a;
        this->y = b;
    }
};

struct Rect : Item {
    Point bottom_left{};
    Point top_right{};

    Rect(int x1, int y1, int x2, int y2) {
        this->bottom_left = Point{x1, y1};
        this->top_right = Point(x2, y2);
    };
};

struct Circle : Item {
    Point center{};
    int radius;

    Circle(int x, int y, int r) {
        this->center = Point{x, y};
        this->radius = r;
    }
};

bool point_in_rect(Point p, Rect r) {
    return p.x >= r.bottom_left.x
           && p.x <= r.top_right.x
           && p.y >= r.bottom_left.y
           && p.y <= r.top_right.y;
}

bool point_in_circle(Point p, Circle c) {
    ll distance_squared = (p.x - c.center.x) * (p.x - c.center.x) + (p.y - c.center.y) * (p.y - c.center.y);
    ll radius_squared = c.radius * c.radius;

    return distance_squared <= radius_squared;
}

int main() {
    fast_io

    int m;
    cin >> m;

    vec<shared_ptr<Item>> shapes;

    WHILE(m) {
        int x1, y1, x2, y2;
        int x, y, r;

        str shape;
        cin >> shape;

        if (shape == "rectangle") {
            cin >> x1 >> y1 >> x2 >> y2;
            shapes.emplace_back(new Rect(x1, y1, x2, y2));
        }

        if (shape == "circle") {
            cin >> x >> y >> r;
            shapes.emplace_back(new Circle(x, y, r));
        }
    }

    int n;
    cin >> n;
    WHILE (n) {
        int a, b;
        cin >> a >> b;
        Point p{a, b};

        ll count = 0;
        for (const shared_ptr<Item> &item: shapes) {
            if (shared_ptr<Rect> rect = dynamic_pointer_cast<Rect>(item)) {
                if (point_in_rect(p, *rect)) {
                    count++;
                }
            }

            if (shared_ptr<Circle> circle = dynamic_pointer_cast<Circle>(item)) {
                if (point_in_circle(p, *circle)) {
                    count++;
                }
            }
        }

        OUT(count)
    }


    return 0;
}
