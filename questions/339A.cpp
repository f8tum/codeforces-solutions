#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string input;
    cin >> input;

    string nums = "";
    for (char &c : input)
    {
        if (c != '+')
            nums += c;
    }

    sort(nums.begin(), nums.end());

    string res = "";

    for (int i = 0; i < nums.size(); i++)
    {
        res += nums[i];
        res += '+';
    }
    res.pop_back();
    cout << res;

    return 0;
}