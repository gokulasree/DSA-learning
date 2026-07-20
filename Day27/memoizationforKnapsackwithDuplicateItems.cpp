//top-down approach(memoization)
class Solution {
    int solve(vector<int>&val,vector<int>& wt,int n,int capacity,vector<vector<int>>& dp){
        if(n==0||capacity==0){
            return 0;
        }
        if(dp[n][capacity]!=-1){
            return dp[n][capacity];
        }
        if(wt[n-1]<=capacity){
            int include=val[n-1]+solve(val,wt,n,capacity-wt[n-1],dp);
            int exclude=solve(val,wt,n-1,capacity,dp);
            dp[n][capacity]=max(include,exclude);
        }else{
            dp[n][capacity]= solve(val,wt,n-1,capacity,dp);
        }
        return dp[n][capacity];
    }
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(capacity+1,-1));
        return solve(val,wt,n,capacity,dp);
    }
};

