#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    void generatePermutations(const vector<int>& nums, vector<int>& permutation, vector<bool>& used,vector<vector<int>>& result) {
        if (permutation.size() == nums.size()) {
            result.push_back(permutation);
            return;
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]))
                continue;
            
            used[i] = true;
            permutation.push_back(nums[i]);
            generatePermutations(nums, permutation, used, result);
            permutation.pop_back();
            used[i] = false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> permutation;
        vector<bool> used(nums.size(), false);
        
        sort(nums.begin(), nums.end());
        
        generatePermutations(nums, permutation, used, result);
        
        return result;
    }
};