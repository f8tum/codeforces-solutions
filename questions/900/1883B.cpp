#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    // Make a frequency map
    unordered_map<char, int> map;

    for (int i = 0; i < n; i++)
    {
      map[s[i]]++;
    }

    // for a palindrome we need atmost a char with odd freq and all others with even freq
    // so we iterate through map, and check if that combination is possible

    int oddCount = 0;
    for (auto p : map)
    {
      if (p.second % 2 != 0)
        oddCount++;
    }

    // if length after subtracting is even we need oddCount should be <= k to make it even freq
    int remaining = n - k;
    if (remaining % 2 == 0)
      cout << (oddCount <= k ? "YES\n" : "NO\n"); 

    // if length after subtracting is odd we need 1 odd, and all other even freq
    else
      cout << (oddCount <= k + 1 && (k - oddCount + 1) % 2 == 0 ? "YES\n" : "NO\n");
  }

  return 0;
}