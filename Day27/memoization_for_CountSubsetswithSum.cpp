class Solution {
    int countSubsets(vector<int>& arr,int target,int n,vector<vector<int>>& dp){
        if(n==0){
            if(target==0){
                return 1;
            }
            return 0;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        if(arr[n-1]<=target){
            int include=countSubsets(arr,target-arr[n-1],n-1,dp);
            int exclude=countSubsets(arr,target,n-1,dp);
            dp[n][target]=include+exclude;
        }else{
            dp[n][target]=countSubsets(arr,target,n-1,dp);
        }
        return dp[n][target];
    }
  public:
    int perfectSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return countSubsets(arr,target,n,dp);
    }
};
