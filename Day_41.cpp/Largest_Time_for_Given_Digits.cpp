#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        string result = "";
        sort(arr.begin(), arr.end());
        
        do {
            int hours = arr[0] * 10 + arr[1];
            int minutes = arr[2] * 10 + arr[3];
            
            if (hours < 24 && minutes < 60) {
                string time = formatTime(hours, minutes);
                if (time > result) {
                    result = time;
                }
            }
        } 
        
        while (next_permutation(arr.begin(), arr.end()));
        
        return result;
    }
    
private:
    string formatTime(int hours, int minutes) {
        return (hours < 10 ? "0" + to_string(hours) : to_string(hours)) + ":" +
               (minutes < 10 ? "0" + to_string(minutes) : to_string(minutes));
    }
};