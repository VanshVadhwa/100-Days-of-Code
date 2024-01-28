#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for (int firstIndex = 0; firstIndex < size - 1; firstIndex++) {
            for (int secondIndex = firstIndex + 1; secondIndex < size; secondIndex++) {
                if (nums[firstIndex] + nums[secondIndex] == target) {
                    return {firstIndex, secondIndex};
                }
            }
        }
        return {};
    }
};
