//top-down approach
class Solution {
    int countWays(vector<int>& coins,int sum,int n,vector<vector<int>>& dp){
        if(n==0) return 0;
        if(sum==0) return 1;
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        if(coins[n-1]<=sum){
            int include=countWays(coins,sum-coins[n-1],n,dp);
            int exclude=countWays(coins,sum,n-1,dp);
            dp[n][sum]=include+exclude;
        }else{
            dp[n][sum]=countWays(coins,sum,n-1,dp);
        }
        return dp[n][sum];
    }
  public:
    int count(vector<int>& coins, int sum) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return countWays(coins,sum,n,dp);
    }
};

