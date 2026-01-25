#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n, s, x;
    cin >> n >> s >> x;

    vector<int> a(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }

    if (sum <= s && (s - sum) % x == 0)
      cout << "YES\n";
    else 
      cout << "NO\n";
  }
}