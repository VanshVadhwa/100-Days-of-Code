class Solution {
public:
    int reverse(int x) {
        long int p = 0;
        while (x!=0) {
            int y = x%10;
            x = x/10;
            p = p*10+y;
            if (INT_MIN >= p || INT_MAX <= p)
            return 0;
        }
        return p;

    }
};