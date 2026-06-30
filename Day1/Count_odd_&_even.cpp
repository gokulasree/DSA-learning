// time complexity is O(n)
// space complexity is O(1)
class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int n = arr.size();
        int co1 = 0,co2=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                  co1=co1+1;
            }
            else
            {
                co2=co2+1;
            }
        }
        return {co2,co1};
        
    }
};
