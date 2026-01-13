#include <iostream>
#include <string>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    long long n;
    cin >> n;

    int i = 1;
    while (n % i == 0)
    {
      i++;
    }

    cout << i - 1 << '\n';
  }

  return 0;
}
