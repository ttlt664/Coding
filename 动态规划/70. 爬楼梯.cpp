//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？


class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=2;
        int dp[1000];
        dp[0] = 0;
        dp[1] = a;
        dp[2] = b;
        if(n<2){
            return n;
        }
        if(n==2){
            return b;
        }
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};