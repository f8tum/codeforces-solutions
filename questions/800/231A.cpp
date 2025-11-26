#include <iostream>
using namespace std;

int main() {
    int questions;
    cin >> questions;

    int solved = 0;

    for (int i = 0; i < questions; i++) 
    {
        int a, b, c;
        cin >> a >> b >> c;  

        if (a + b + c >= 2) 
            solved++;
    }

    cout << solved << '\n';
    return 0;
}