#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int anna = a + (int)ceil(c / 2.0);
        int katie = b + (int)floor(c / 2.0);
        
        if (anna > katie) cout << "First\n";
        else cout << "Second\n";
    }

    return 0;
}