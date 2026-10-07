class Solution {
public:
//fib series
    int climbStairs(int n) {
        if(n<=3) return n;
        int prev1=3;
        int prev2=2;
        int cur;
        for(int i=0;i<n-3;i++){
            cur=prev1+prev2;
            prev2=prev1;
            prev1=cur;
        }
        return cur;
    }
};