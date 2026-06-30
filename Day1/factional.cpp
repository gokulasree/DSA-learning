// time complexity is O(n)
// space complexity is O(1)
class Solution {
  public:
    int factorial(int n) {
        // code here
        int pro=1;
        for(int i=1;i<=n;i++)
        {
            pro*=i;
        }
        return pro;
    }
};
