#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) 
    {
        char x = tolower((char)a[i]);
        char y = tolower((char)b[i]);
    if (x < y) {cout << -1 << '\n'; return 0;}
    if (x > y) {cout << 1 << '\n'; return 0;}
    }
    cout << 0 << '\n';
    return 0;
}