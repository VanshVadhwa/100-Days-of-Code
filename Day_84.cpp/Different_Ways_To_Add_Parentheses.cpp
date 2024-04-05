#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> results;
        
        for (int i = 0; i < expression.length(); ++i) {
            char op = expression[i];
            if (op == '+' || op == '-' || op == '*') {
                vector<int> leftResults = diffWaysToCompute(expression.substr(0, i));
                vector<int> rightResults = diffWaysToCompute(expression.substr(i + 1));
                
                for (int left : leftResults) {
                    for (int right : rightResults) {
                        if (op == '+')
                            results.push_back(left + right);
                        else if (op == '-')
                            results.push_back(left - right);
                        else if (op == '*')
                            results.push_back(left * right);
                    }
                }
            }
        }

        if (results.empty())
            results.push_back(stoi(expression));
        
        return results;
    }
};