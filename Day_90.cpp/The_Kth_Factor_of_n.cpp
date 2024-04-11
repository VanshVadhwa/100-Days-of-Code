#include<iostream>
using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {
        int count = 0;
        
        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                count++;
                if (count == k) {
                    return i; // Return the kth factor
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution ans;
    int n, k;
    cin >> n >> k;
    cout << ans.kthFactor(n, k);
}