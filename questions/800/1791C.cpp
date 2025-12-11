#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = n;

        // We use 2 pointers 
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
                ans -= 2;
            else 
                break;
            i++;
            j--;
        }

        cout << ans << '\n';
    }

    return 0;
}