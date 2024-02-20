#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for (const string& time : timePoints) {
            int hour = stoi(time.substr(0, 2));
            int minute = stoi(time.substr(3));
            minutes.push_back(hour * 60 + minute);
        }

        sort(minutes.begin(), minutes.end());

        int minDifference = INT_MAX;
        int n = minutes.size();

        minutes.push_back(minutes[0] + 1440);

        for (int i = 0; i < n; ++i) {
            int diff = minutes[i + 1] - minutes[i];
            minDifference = min(minDifference, diff);
        }

        return minDifference;
    }
};