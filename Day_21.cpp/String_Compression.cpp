#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n <= 1) {
            return n;
        }

        int index = 0;
        int i = 0;

        while (i < n) {
            char current_char = chars[i];
            int count = 0;


            while (i < n && chars[i] == current_char) {
                i++;
                count++;
            }

            chars[index++] = current_char;

            if (count > 1) {
                string count_str = to_string(count);
                for (char c : count_str) {
                    chars[index++] = c;
                }
            }
        }

        return index;
    }
};