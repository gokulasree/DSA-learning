class Solution {
    int solve(vector<int>& val,vector<int>& wt,int N,int W,vector<vector<int>>& dp){
        if(N==0||W==0) return 0;
        if(dp[N][W]!=-1) return dp[N][W];
        if(wt[N-1]<=W){
            int include = val[N-1]+solve(val,wt,N-1,W-wt[N-1],dp);
            int exclude = solve(val,wt,N-1,W,dp);
            dp[N][W]= max(include,exclude);
        }
        else{
            dp[N][W]=solve(val,wt,N-1,W,dp);
        }
        return dp[N][W];
    }
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int N=val.size();
        vector<vector<int>> dp(N+1,vector<int>(W+1,-1));
        int ans= solve(val,wt,N,W,dp);
        return ans;
    }
};
