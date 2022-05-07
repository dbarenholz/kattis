#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long
#define vec vector
#define arr array

int s1(int x)
{
  int sum = 0;
  for (int i = 1; i <= x; i++)
  {
    sum += i;
  }
  return sum;
}

int s2(int x)
{
  int sum = 0;
  int count = 0;
  int add = 1;
  while (count < x)
  {
    sum += add;
    add += 2;
    count += 1;
  }
  return sum;
}

int s3(int x)
{
  int sum = 0;
  int count = 0;
  int add = 0;
  while (count <= x)
  {
    sum += add;
    add += 2;
    count += 1;
  }
  return sum;
}

int main()
{
  int P;
  cin >> P;

  while (P-- > 0)
  {
    int K, N;
    cin >> K >> N;

    cout << K << " " << s1(N) << " " << s2(N) << " " << s3(N) << "\n";
  }

  return 0;
}
