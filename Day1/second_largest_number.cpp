// time complexity is O(nlogn)
// space complexity is O(1)
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int lar = -1,sec=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>lar){
                lar=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>sec && arr[i]!=lar){
                sec=arr[i];
            }
        }
        return sec;
    }
};
