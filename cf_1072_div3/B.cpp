#include <iostream>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    long long s, k, m;
    cin >> s >> k >> m;

    long long n = m / k;
    long long r = m % k;
    long long currentSand;

    // Even intervals (0, 2, 4...) start with the full capacity 's'.
    // Odd intervals (1, 3, 5...) start with 'min(s, k)' because that is 
    // the max amount that could have flowed in the previous 'k' minutes.
    if (n % 2 == 0)
      currentSand = s;
    else
      currentSand = min(s, k);

    // Calculate remaining sand: Starting Amount - Time Passed
    // We use max(0, ...) because sand cannot be negative.
    long long ans = max(0LL, currentSand - r);

    cout << ans << "\n";
  }

  return 0;
}