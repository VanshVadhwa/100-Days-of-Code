#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(result, "", n, n);
        return result;
    }
    
    void generate(vector<string>& result, string current, int left, int right) {
        if (left == 0 && right == 0) {
            result.push_back(current);
            return;
        }
        
        if (left > 0) {
            generate(result, current + '(', left - 1, right);
        }
        
        if (right > left) {
            generate(result, current + ')', left, right - 1);
        }
    }
};