#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); 
        sort(s.begin(), s.end()); 
        
        int contentChildren = 0; 
        int child = 0; 
        int cookie = 0; 
        
        // Iterate through each child
        while (child < g.size() && cookie < s.size()) {
            if (s[cookie] >= g[child]) {
                contentChildren++; 
                child++; 
            }
            cookie++; 
        }
        
        return contentChildren;
    }
};