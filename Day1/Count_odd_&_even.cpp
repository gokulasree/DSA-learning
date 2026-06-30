// time complexity is O(log n) 
// space complexity is O(1)
class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int num=n;
        int co = 0;
        while(num>0){
            int d=num%10;
            co = co+1;
            num/=10;
        }
        return co;
           
    }    
    
};
