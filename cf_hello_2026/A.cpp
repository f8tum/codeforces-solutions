#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() 
{
    ll tc; 
    cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll one = 0, zero = 0;

        for(ll i = 0; i < n; i++)
        {
          cin >> a[i];
          if (a[i] == 1) one++;
          else zero++;
        }

        if (zero>0 && (a[0]==1 || a[n-1]==1))
            cout << "Alice\n";

        else if(one == n) cout << "Alice\n";
        else cout << "Bob\n";
    }
}