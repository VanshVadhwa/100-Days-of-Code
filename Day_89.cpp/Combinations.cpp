#include<iostream>
#include<vector>
using namespace std;

class Solution {
private:
    void generateCombinations(int n, int k, int start, std::vector<int>& current, vector<vector<int>>& result) {
        if (k == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i <= n; ++i) {
            current.push_back(i);
            generateCombinations(n, k - 1, i + 1, current, result);
            current.pop_back(); 
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> current;
        generateCombinations(n, k, 1, current, result);
        return result;
    }
};