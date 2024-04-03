#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
private:
    void findCombinations(vector<vector<int>>& result, vector<int>& candidates, vector<int>& current, int target, int start) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        for (int i = start; i < candidates.size() && candidates[i] <= target; ++i) {
            if (i > start && candidates[i] == candidates[i - 1])
                continue;
            current.push_back(candidates[i]);
            findCombinations(result, candidates, current, target - candidates[i], i + 1);
            current.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        findCombinations(result, candidates, current, target, 0);
        return result;
    }
};