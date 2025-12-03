#include <iostream>
#include <vector>
#include <climits>
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
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        bool sorted = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                sorted = false;
                break;
            }
        }

        if (!sorted)
            cout << 0 << "\n";
        else
        {
            int minDiff = INT_MAX;
            for (int i = 0; i < n - 1; i++)
                minDiff = min(minDiff, nums[i + 1] - nums[i]);
            cout << (minDiff / 2) + 1 << '\n';
        }
    }

    return 0;
}