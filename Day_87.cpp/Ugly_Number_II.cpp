#include<iostream>
using namespace std;

class Solution {
private:
    bool prime(int n) {
        while (n % 2 == 0)
            n /= 2;
        while (n % 3 == 0)
            n /= 3;
        while (n % 5 == 0)
            n /= 5;
        return n == 1;
    }

    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        return prime(n);
    }

public:
    int nthUglyNumber(int n) {
        if (n <= 0) return 0;
        int uglyNumber = 1;
        for (int count = 1; count < n;) {
            ++uglyNumber;
            if (isUgly(uglyNumber)) {
                ++count;
            }
        }
        return uglyNumber;
    }
};

int main() {
    int n;
    cin >> n;
    Solution ugly;
    cout << ugly.nthUglyNumber(n) << endl;
    return 0;
}