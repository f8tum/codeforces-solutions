#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // Step 1: take max of a[i] and b[i]
        vector<ll> c(n);
        for (int i = 0; i < n; i++)
            c[i] = max(a[i], b[i]);

        // Step 2: suffix maximum
        vector<ll> best(n);
        best[n - 1] = c[n - 1];
        for (int i = n - 2; i >= 0; i--)
            best[i] = max(best[i + 1], c[i]);

        // Step 3: prefix sum
        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + best[i];

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << pref[r] - pref[l - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}