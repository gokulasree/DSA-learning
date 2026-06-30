class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n=nums.size();
      int curr_sum=0;
      int maxsum=INT_MIN;
      for(int i=0;i<n;i++){
        // int elem=nums[i];
        curr_sum=curr_sum+nums[i];
        // if(curr_sum>maxsum){
        //     maxsum=curr_sum;
            maxsum=max
        }
        if(curr_sum<0){
            curr_sum=0;
        }
      }
      return maxsum;
    }
};