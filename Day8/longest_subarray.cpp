class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0,j=0;
        int maxlen=0;
        int len=0,sum=0;
        while(j<n){
                sum+=arr[i];
                if(sum<k) j++;
                else if(sum==k){
                    len=j-i+1;
                    maxlen=max(maxlen,len);
                    j++;
                }
                else if(sum>k){
                while(sum>k){
                    sum-=arr[i];
                    i++;
                }
                if(sum==k){
                    maxlen=max(maxlen,len);
                }
             j++;
            }
        }
        return maxlen;
    }
};