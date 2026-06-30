class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        // line 6,7 is common for the methods
        int n=arr.size();
        int maxsum=INT_MIN;
        // brute force solution
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<i+k;j++){
        //         sum+=arr[j];
        //     }
        //     maxsum=max(maxsum,sum);
        // }
        // return maxsum;
        
        
        // sliding window method
        int i=0,j=0;
        int sum=0;
        while(j<n){
            sum+=arr[j];
            if((j-i+1)<k){
                j++;
            }
            else if((j-i+1)==k){
               maxsum=max(maxsum,sum);
               sum-=arr[i];
               i++;
               j++;
            }
        }
        return maxsum;
    }
};