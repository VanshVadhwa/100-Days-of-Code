#include<iostream>
#include<string>
using namespace std;
string revWords(string str) {
    stringstream s(str);
    string word;
    string reverse;

    while (s >> word) {
        reverse = word + " " + reverse;
    }

    if (!reverse.empty()) {
        reverse.pop_back();
    }

    return reverse;
}