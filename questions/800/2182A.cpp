#include <iostream>
#include <string>
using namespace std;
#define ll long long

int main()
{
  // if the string contains 2025 we need to only change 5 to 6 the answer is 1
  // else the string contains 2026 the answer is 0
  // the answer is always 1 or 0

  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (s.find("2025") != string::npos && s.find("2026") == string::npos) << '\n';
  }

  return 0;
}