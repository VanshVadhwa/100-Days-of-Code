#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // int n = candyType.size();
        // int halfSize = n/2;
        // int count =10;
        // for(int i=0;i<n-1;i++) {
        //     if(candyType[i] != candyType[i+1]) {
        //         count++;
        //     }
        // }
        // if(candyType[n-1]!=candyType[n-2]) {
        //     count = count+1;
        // }
        // if(candyType[n-1]==candyType[0]) {
        //     return 1;
        // }


        // return min(count, halfSize);

        unordered_set<int> candySet;
        int n = candyType.size();
        for (int type : candyType) {
            candySet.insert(type);
        }
        int maxTypes = candySet.size();
        int halfSize = n / 2;
        
        // The sister can receive at most half of the total number of candy types
        return min(maxTypes, halfSize);
    }
};