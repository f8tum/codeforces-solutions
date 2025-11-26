#include "../../bits/stdc++.h"
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int gasStations;
        int endPoint;
        cin >> gasStations >> endPoint;

        vector<int> stationPoints(gasStations);
        for (int i = 0; i < gasStations; i++)
        {
            cin >> stationPoints[i];
        }

        int maxGap = stationPoints[0];

        for (int i = 0; i < gasStations - 1; i++)
        {
            maxGap = max(maxGap, stationPoints[i + 1] - stationPoints[i]);
        }

        int backJourney = 2 * (endPoint - stationPoints[gasStations - 1]);
        cout << max(maxGap, backJourney) << '\n';
    }

    return 0;
}