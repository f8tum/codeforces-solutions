#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    bool done = false;

    for (int i = 0; i < n && !done; i++)
    {
      int max = a[i];
      int pos = -1;

      // find maximum in suffix
      for (int j = i + 1; j < n; j++)
      {
        if (a[j] > max)
        {
          max = a[j];
          pos = j;
        }
      }

      // if we can improve lexicographically
      if (pos != -1)
      {
        // take LAST occurrence of mx
        for (int j = n - 1; j > i; j--)
        {
          if (a[j] == max)
          {
            reverse(a.begin() + i, a.begin() + j + 1);
            break;
          }
        }
        done = true;
      }
    }

    for (int x : a)
      cout << x << " ";
    cout << "\n";
  }

  return 0;
}