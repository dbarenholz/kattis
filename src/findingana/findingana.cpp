#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
    string s;
    cin >> s;
    bool reached = false;
    for (const char c : s)
    {
        if (c == 'a' || reached)
        {
            cout << c;
            reached = true;
        }
    }
    cout << "\n";

    return 0;
}
