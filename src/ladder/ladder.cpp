#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
    int h, v;
    cin >> h >> v;

    cout << (int)ceil(
        h / sin(
                (v * 3.14159265358979) / 180));
    return 0;
}
