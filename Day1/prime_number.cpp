// time complexity is O(n)
// space complexity is O(1)
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int co=0;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                co++;
            }
            
        }
        co=co+1;
        if(co==2)
            return true;
        else
            return false;
    }
};
