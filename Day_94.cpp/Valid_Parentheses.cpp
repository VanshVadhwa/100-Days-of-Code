#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    char bracket (char c) {
        if (c == ')') return '(';
        else if (c == '}') return '{';
        else return '[';
    }
    bool isValid(string s) {
        stack<char> brackets;

        for(char c : s) {
            if(c=='(' || c=='{' || c=='[') {
                brackets.push(c);
            }
            else {
                if(brackets.empty()) {
                    return false;
                }
                char top = brackets.top();
                if (top != bracket(c)) return false;
                brackets.pop();
            }
        }
        if(!brackets.empty()) return false;
        return true;
    }
};