#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> p(target + 1);
        p[0] = 1;
        
        for (int i = 1; i <= target; ++i) {
            for (int num : nums) {
                if (i >= num) {
                    p[i] += p[i - num];
                }
            }
        }
        
        return p[target];
    }
};