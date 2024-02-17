#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> nums_str;

        for (int num : nums) {
            nums_str.push_back(to_string(num));
        }

        sort(nums_str.begin(), nums_str.end(), [](const string& a, const string& b) {
            return (a + b) > (b + a);
        });

        stringstream ss;

        for (const string& num_str : nums_str) {
            ss << num_str;
        }
        
        if (ss.str()[0] == '0') {
            return "0";
        }
        
        return ss.str();
    }
};