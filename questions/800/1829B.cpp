#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];

        int maxCount = 0;
        int count = 0;

        // Counting max consecutive 0s
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else count = 0;
        }

        cout << maxCount << '\n';
    }

    return 0;
}