#include <iostream>
#include <string>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string word;
        cin >> word;

        if (word.size() <= 10)
            cout << word << '\n';

        else {
            string res = "";
            res += word[0];
            res += to_string(word.size() - 2);
            res += word[word.length() - 1];
            cout << res << '\n';
        }
    }

    return 0;
}
