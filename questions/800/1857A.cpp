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

        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        // even + even = even
        cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}