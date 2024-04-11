#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int maxProfit = 0;
        int minPrice = prices[0];

        for (int i = 1; i < n; i++) {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;

        
        // int max_diff=0;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i;j<n;j++){
        //         if(prices[j]-prices[i]>max_diff){
        //             max_diff=prices[j]-prices[i];
        //         }
        //     }
        // }
        // return max_diff;
    //     int n = prices.size();
    //     vector<int> ans = prices;
    //     sort(prices.begin(), prices.end());

    //     if(prices[0]==ans[n-1]) {
    //         return 0;
    //     }

    //     int min = ans[0];
    //     for (int i = 0; i < n; i++) { 
    //         if (ans[i] < min) { 
    //             min = ans[i]; 
    //         } 
    //     } 
    

    //     int i;
    //     int max = ans[min];
    //     for (i = 1; i < n; i++) {
    //         if (ans[i] > max) {
    //             max = ans[i];
    //         }
    //     }

    //     return (max-min);
  
    // // return min_ele; 
    // //     if(ans[n-1] > prices[0]) {
    // //         // for(int i=0;i<n;i++) {

    // //         // }
    // //         return (max - prices[0]);
    // //     }

    //     return -1;
    }
};