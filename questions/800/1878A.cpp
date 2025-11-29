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
        vector<int> res(n - 1, 0);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> res[i];
        }

        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += res[i];
        }
        cout << 0 - sum << '\n';
    }

    return 0;
}