#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> distinct;
    for (char c : s) distinct.insert(c);

    if (distinct.size() % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";

    return 0;
}