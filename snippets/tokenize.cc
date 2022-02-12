#include <bits/stdc++.h>

using namespace std;

vector<string> tokenize(const string &s, char c) {
  vector<string> T;
  stringstream ss = stringstream(s);

  for (string t; getline(ss, t, c);) {
    T.push_back(t);
  }

  return T;
}
