//bottom-up approach
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(target+1));
        dp[0][0]=1;
        for(int i=1;i<n+1;i++){
            for(int j=0;j<target+1;j++){
                if(arr[i-1]<=j){
                    int include=dp[i-1][j-arr[i-1]];
                    int exclude=dp[i-1][j];
                    dp[i][j]=include+exclude;
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][target];
    }
};