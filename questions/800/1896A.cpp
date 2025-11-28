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

        if (nums[0] == 1)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}