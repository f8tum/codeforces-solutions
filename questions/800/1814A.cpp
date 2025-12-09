#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long tc;
    cin >> tc;

    while (tc--)
    {
        long long n, k;
        cin >> n >> k;
        // this is just a GCD problem
        (n % 2 == 0 || (n - k) % 2 == 0) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}