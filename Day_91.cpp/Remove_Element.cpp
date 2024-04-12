#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]!=val) {
                nums[index++]=nums[i];
            }
        }
        return index;
    }
};

int main() {
    Solution ans;
    vector<int> nums;
    int n;
    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int val;
    cin >> val;
    int newSize = ans.removeElement(nums, val);
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
    
}