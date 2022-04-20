#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main()
{
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    if (wc - ws >= 1 && hc - hs >= 1)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
    return 0;
}
