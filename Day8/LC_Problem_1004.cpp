class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n=nums.size();
        int i=0,j=0;
        int maxcnt=INT_MIN;
        int cnt=0;
        int sum=0;
        while(j<n)
        {
             if(nums[j]==0)
             {
                cnt++;
             }
             if(cnt<=k)
             {
                maxcnt=max(maxcnt,j-i+1);
                j++;
             }
             else if(cnt>k)
             {
                while(cnt>k)
                {
                    if(nums[i]==0)
                    {
                        cnt--;
                    }
                    i++;
                }
                maxcnt=max(maxcnt,j-i+1);
                j++;
                
             }
        }
        return maxcnt;
    }
};