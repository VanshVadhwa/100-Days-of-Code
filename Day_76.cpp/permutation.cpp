#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void permutation(vector<int> nums, vector<vector<int>> &ans, int index) {
    //base case
    if(index>=nums.size()) {
        ans.push_back(nums);
        return ;
    }

    //Recursive Call
    for(int i=index;i<nums.size();i++) {
        swap(nums[index],nums[i]);
        permutation(nums, ans, index+1);

        //backtrack
        swap(nums[index], nums[i]);
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    int index = 0;
    permutation(nums, ans, index);

    // Print permutations
    for (size_t i = 0; i < ans.size(); i++) {
        for (size_t j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}