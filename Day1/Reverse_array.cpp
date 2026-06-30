// time complexity is O(n)
// space complexity is O(1)
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n/2;i++){
            int t = arr[n-1-i];
            arr[n-1-i]=arr[i];
            arr[i]=t;
        }
    }
};
