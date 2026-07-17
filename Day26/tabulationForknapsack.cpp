class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int N=val.size();
        vector<vector<int>> dp(N+1,vector<int>(W+1,0));
        for(int i=0;i<=N;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=W;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                if(wt[i-1]<=j){
                    int include = val[i-1]+dp[i-1][j-wt[i-1]];
                    int exclude = dp[i-1][j];
                    dp[i][j]=max(include,exclude);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][W];
    }