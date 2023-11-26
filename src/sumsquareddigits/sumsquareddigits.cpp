#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int SSD(int b, int n)
{
  int ssd = 0;

  while (n > 0)
  {
    ssd += pow(n % b, 2);
    n /= b;
  }

  return ssd;
}

int main()
{
  int P;
  cin >> P;
  while (P-- > 0)
  {
    int K, b, n;
    cin >> K >> b >> n;
    cout << K << " " << SSD(b, n) << "\n";
  }

  return 0;
}
