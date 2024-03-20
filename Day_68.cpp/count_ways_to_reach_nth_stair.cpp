#include<iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    // Base Case
    if(nStairs<0) {
        return 0;
    }
    if(nStairs==0) {
        return 1;
    }

    //Recursive Call
    long long int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;

}

int main()
{
       
}