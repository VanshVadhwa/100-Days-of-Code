#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        
        int totalSubsets = 1 << n;
        
        for (int i = 0; i < totalSubsets; ++i) {
            vector<int> subset;
            for (int j = 0; j < n; ++j) {
                if ((i >> j) & 1) { 
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }
        
        return result;
    }
};
