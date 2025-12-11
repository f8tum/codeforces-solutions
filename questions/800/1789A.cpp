#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool beautiful = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (std::gcd(a[i], a[j]) <= 2)
                {
                    beautiful = true;
                    break;
                }
            }
            if (beautiful) break;
        }

        cout << (beautiful ? "Yes\n" : "No\n");
    }
    return 0;
}