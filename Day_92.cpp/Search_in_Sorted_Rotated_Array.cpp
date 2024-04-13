#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;

        // Find the pivot point
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        int pivot = left;

        left = 0;
        right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int rotatedMid = (mid + pivot) % n; // Adjusting for rotation

            if (nums[rotatedMid] == target) {
                return rotatedMid;
            } else if (nums[rotatedMid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int index = sol.search(nums, target);
    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    } else {
        cout << "Target " << target << " not found in the array" << endl;
    }
    return 0;
}