// time complexity is O(log n)
// space complexity is O(1) 
class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int sum = 0;
        while(n>0){
            int d=n%10;
            sum=sum+d;
            n/=10;
        }
        return sum;
    }
};
