#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> frequency;
        vector<int> result;

        for (int num : nums)
            frequency[num]++;
        
        int n = nums.size();
        int threshold = n / 3;

        for (const auto& pair : frequency) {
            if (pair.second > threshold)
                result.push_back(pair.first);
        }

        return result;
    }
};
