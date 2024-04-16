#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i=1;i<=n;i++) {
            sum1 += i;
        }
        
        for(int i=0;i<n-1;i++) {
            sum2 += array[i];
        }
        
        return (sum1 - sum2);
        
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}