#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int count = 0;
        for (int cows = 0; cows <= n / 4; cows++)
        {
            int legs_left = n - (4 * cows);
            if (legs_left >= 0 && legs_left % 2 == 0)
                count++;
        }
        cout << count << '\n';
    }

    return 0;
}
