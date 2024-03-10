#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int maxLength = 0;
        int count = 0;

        countMap[0] = -1; 

        for (int i = 0; i < nums.size(); ++i) {
            count += (nums[i] == 1) ? 1 : -1;

            if (countMap.find(count) != countMap.end()) {
                maxLength = max(maxLength, i - countMap[count]);
            } else {
                countMap[count] = i;
            }
        }

        return maxLength;
    }
};