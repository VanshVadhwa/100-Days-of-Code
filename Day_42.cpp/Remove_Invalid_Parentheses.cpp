#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string> result;
        if (s.empty()) {
            result.push_back("");
            return result;
        }
        
        queue<string> q;
        unordered_set<string> visited;
        q.push(s);
        visited.insert(s);
        
        bool found = false;
        
        while (!q.empty()) {
            string current = q.front();
            q.pop();
            
            if (isValid(current)) {
                result.push_back(current);
                found = true;
            }
            
            if (found) continue;
            
            for (int i = 0; i < current.length(); ++i) {
                if (current[i] != '(' && current[i] != ')') continue;
                
                string next = current.substr(0, i) + current.substr(i + 1);
                
                if (visited.find(next) == visited.end()) {
                    q.push(next);
                    visited.insert(next);
                }
            }
        }
        
        return result;
    }

    bool isValid(const string& s) {
        int count = 0;
        for (char c : s) {
            if (c == '(') {
                count++;
            } else if (c == ')') {
                count--;
                if (count < 0) return false; // More ')' than '('
            }
        }
        return count == 0; 
    }
};