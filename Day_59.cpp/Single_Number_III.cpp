#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorResult = 0;
        for (int num : nums) {
            xorResult ^= num;
        }
        int rightmostSetBit = 1;
        while ((xorResult & rightmostSetBit) == 0) {
            rightmostSetBit <<= 1;
        }
        int single1 = 0, single2 = 0;
        for (int num : nums) {
            if (num & rightmostSetBit) {
                single1 ^= num;
            } else {
                single2 ^= num;
            }
        }
        return {single1, single2};
    }
};