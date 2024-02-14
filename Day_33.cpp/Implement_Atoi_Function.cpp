#include<iostream>
using namespace std;

int createAtoi(string s) {
    int sign = 1;
    int i = 0;
    int result = 0;
    int maxDiv10 = INT_MAX / 10;

    while (s[i] == ' ') {
      i++;
    }
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i++] == '-') ? -1 : 1;
    }

    while (isdigit(s[i])) {
        int digit = s[i++] - '0';

        if (result > maxDiv10 || (result == maxDiv10 && digit > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
    }
    return result * sign;
}
