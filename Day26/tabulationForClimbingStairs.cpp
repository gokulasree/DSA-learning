// Tabulation(bottom-up) approach for climbing stairs
class Solution {
   
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int> dp(n+1,0);
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
// time complexity is O(n)
// space complexity is O(n) for the dp array