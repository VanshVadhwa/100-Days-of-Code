#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> partials;
        string result = "";
        int count = 0;

        for (char c : s) {
            if (isdigit(c)) {
                count = count * 10 + (c - '0');
            } 
            else if (c == '[') {
                counts.push(count);
                partials.push(result);
                count = 0;
                result = "";
            } 
            else if (c == ']') {
                int repeat = counts.top();
                counts.pop();
                string temp = partials.top();
                partials.pop();
                
                for (int i = 0; i < repeat; ++i) {
                    temp += result;
                }
                result = temp;
            } 
            else {
                result += c;
            }
        }

        return result;
    }
};
