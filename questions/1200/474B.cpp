#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // size of piles array
  int n;
  cin >> n;

  // piles array
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  // size of target array
  int m;
  cin >> m;

  // target array
  vector<int> q(m);
  for (int i = 0; i < m; i++)
    cin >> q[i];

  // prefix sum array
  vector<long long> prefixSum;
  int currentSum = 0;
  for (int i = 0; i < n; i++)
  { 
    currentSum += a[i];
    prefixSum.push_back(currentSum);
  }

  // find the first prefixSum >= target[j]
  // using binary search since prefix sum array will be sorted
  for (int i = 0; i < m; i++)
  {
    long long target = q[i];

    int low = 0, high = n - 1;
    int ans = m; // if x > total sum 
    while (low <= high)
    {
      int mid = low + (high - low) / 2;
      if (prefixSum[mid] >= target)
      {
        ans = mid;
        high = mid - 1;
      }
      else 
        low = mid + 1;
    }
    cout << ans + 1 << "\n";
  }

  return 0;
}