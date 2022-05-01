#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int main()
{
  int d, m, y = 2009;
  cin >> d >> m;

  // https://stackoverflow.com/questions/40517192/c-day-of-week-for-given-date
  // 1-based day, 0-based month, year since 1900
  tm in = {0, 0, 0, d, m - 1, y - 1900};

  time_t tmp = mktime(&in);
  const tm *res = localtime(&tmp);

  // Sunday == 0, Monday == 1, and so on ...
  map<int, string> mp = {
      {0, "Sunday"},
      {1, "Monday"},
      {2, "Tuesday"},
      {3, "Wednesday"},
      {4, "Thursday"},
      {5, "Friday"},
      {6, "Saturday"}};
  cout << mp[res->tm_wday] << "\n";
  return 0;
}
