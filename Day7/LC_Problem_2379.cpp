class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        //  SLIDING WINDOW CONCEPT
        int n=blocks.size();
        int cnt=0;
        int i=0,j=0;
        int mini=INT_MAX;
        while(j<n){
            if(blocks[j]=='W'){
                cnt++;
            }
            if(j-i+1<k){
               j++;
            }
            else if(j-i+1==k){
                mini=min(mini,cnt);
                if(blocks[i]=='W'){
                    cnt--;
                }
                i++;
                j++;
            }
        }
        return mini;
    }
};