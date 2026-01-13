#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] == -1 && a[n - 1] == -1)
            a[0] = a[n - 1] = 0;
        else if (a[0] == -1)
            a[0] = a[n - 1];
        else if (a[n - 1] == -1)
            a[n - 1] = a[0];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
                a[i] = 0;
        }

        int diff;
        if (a[n - 1] >= a[0])
            diff = a[n - 1] - a[0];
        else
            diff = a[0] - a[n - 1];

        cout << diff << "\n";

        for (int i = 0; i < n; i++)
        {
            cout << a[i];
            if (i + 1 == n)
                cout << "\n";
            else
                cout << " ";
        }
    }

    return 0;
}