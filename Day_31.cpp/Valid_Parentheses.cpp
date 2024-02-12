#include<iostream>
#include<string>
using namespace std;

bool isValidParenthesis(string s)
{
    int round = 0, curly = 0, square = 0;

    for (char c : s) {
            if (c == '(') round++;
            else if (c == ')') round--;
            else if (c == '{') curly++;
            else if (c == '}') curly--;
            else if (c == '[') square++;
            else if (c == ']') square--;

            if (round < 0 || curly < 0 || square < 0) 
            return false;
        }

        if (round != 0 || curly != 0 || square != 0) {
            return false;
        }

        return true;
}