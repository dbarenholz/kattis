#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

int main() {
  int n;
  cin >> n;
  while (n-- > 0) {
    // Read entire line into a string
    string s;
    while (s.empty()) {
      getline(cin, s);
    }

    // Tokenize by space.
    string buf;
    stringstream ss(s);
    vector<string> tokens;
    while (ss >> buf) {
      tokens.push_back((buf));
    }

    // Check first and second token, then print.
    if (tokens.at(0) == "Simon" && tokens.at(1) == "says") {
      for (int i = 2; i < tokens.size(); ++i) {
        cout << tokens.at(i) << " ";
      }
    }
  }
  return 0;
}

/*

//It's that time again. Kattis does not have string.starts_with......

int main() {
  string start = "Simon says";
  int n;
  cin >> n;
  while (n-- >= 0) {

    if (s.starts_with(start)) {
      cout << s.substr(start.length() + 1) << "\n";
    }
  }
  return 0;
}

 */

