class Solution {
      int fibhelper(int n,vector<int>& dp){
        if(n<=1) return n;
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=fibhelper(n-1,dp)+fibhelper(n-2,dp);
        return dp[n];
    }
  public:
    int nthFibonacci(int n) {
        // code here
       
        // Top-down(Memoization) Dynamic Prgramming
        vector<int>dp(n+1,-1);
        return fibhelper(n,dp);
        
    }
};
// time complexity is O(n)
// space complexity is O(n) for the dp array and O(n) for the recursion stack