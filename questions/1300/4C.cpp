#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string,int> freq;
    for (int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;

        if (freq.find(s) == freq.end()) 
        {
            cout << "OK\n";
            freq[s] = 1;
        } 
        else 
        {
            cout << s << freq[s] << "\n";
            freq[s]++;
        }
    }
    return 0;
}