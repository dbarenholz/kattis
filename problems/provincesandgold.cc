#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define arr array

int main() {
  int g, s, c;
  vector<tuple<int, int, string>> vc = {
      { 2, 1, "Estate" },
      { 5, 3, "Duchy" },
      { 8, 6, "Province" }
  };
  vector<tuple<int, int, string>> tc = {
      { 0, 1, "Copper" },
      { 3, 2, "Silver" },
      { 6, 3, "Gold" }
  };

  cin >> g >> s >> c;
  int power = g * get<1>(tc[2]) + s * get<1>(tc[1]) + c * get<1>(tc[0]);
  tuple<int, int, string> t = { -1, -1, "" };
  tuple<int, int, string> availableVictoryCard = t;
  tuple<int, int, string> availableTreasureCard = t;
  for (auto v: vc) {
    if (power >= get<0>(v)) {
      availableVictoryCard = v;
    }
  }
  for (auto v: tc) {
    if (power >= get<0>(v)) {
      availableTreasureCard = v;
    }
  }
  if (get<0>(availableVictoryCard) == get<0>(t)) {
    cout << get<2>(availableTreasureCard) << "\n";
  } else {
    cout << get<2>(availableVictoryCard) << " or " << get<2>(availableTreasureCard) << "\n";
  }

  return 0;
}