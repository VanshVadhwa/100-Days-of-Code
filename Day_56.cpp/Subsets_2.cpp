#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        
        vector<vector<int>> result = {{}};
        int startIndex = 0; 
        
        for (int i = 0; i < nums.size(); ++i) {
            int size = result.size();
            int start = (i > 0 && nums[i] == nums[i - 1]) ? startIndex : 0; 
            
            for (int j = start; j < size; ++j) {
                vector<int> subset = result[j]; 
                subset.push_back(nums[i]); 
                result.push_back(subset); 
            }
            startIndex = size; 
        }
        
        return result;
    }
};