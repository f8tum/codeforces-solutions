#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        
        // if x lies between min and max sum with k numbers between 1 to n then it exists
        long long minSum = k * (k + 1) / 2;              
        long long maxSum = k * (2 * n - k + 1) / 2;
        
        cout << (x >= minSum && x <= maxSum ? "YES\n" : "NO\n");
    }
}
