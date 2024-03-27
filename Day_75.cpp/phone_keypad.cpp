#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string digit, string& output, int index, vector<string>& ans, string mapping[]) {
    //base case
    if(index>=digit.length()) {
        ans.push_back(output);
        return ;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for(int i=0;i<value.length();i++) {
        output.push_back(value[i]);
        solve(digit, output, index+1, ans, mapping);
        output.pop_back();
    }


}

int main() {
    string digit = "23";
    string output = "";
    vector<string> ans;
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digit, output, 0, ans, mapping);

    // Print the result
    for (const string& s : ans) {
        cout << s << endl;
    }

    return 0;
}