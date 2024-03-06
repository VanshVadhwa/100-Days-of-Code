#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int maxProd = nums[0];
        int minProd = nums[0];
        int result = nums[0];

        for (int i = 1; i < n; ++i) {
            int tempMaxProd = maxProd;
            maxProd = max({nums[i], nums[i] * maxProd, nums[i] * minProd});
            minProd = min({nums[i], nums[i] * tempMaxProd, nums[i] * minProd});
            result = max(result, maxProd);
        }

        return result;
    }
};
