class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        unordered_map<int,int> myMap;
        
        // for sum=0,-1
        myMap[0]=-1;
        int prefix=0, max_len=0;
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            
            // we willcheck for prefix -1
            if(myMap.find(prefix-k)!=myMap.end()){
                max_len=max(max_len,i-myMap[prefix-k]);
            }
            // store first arruence of prefix sum
            if(myMap.find(prefix)==myMap.end()){
                myMap[prefix]=i;
            }
        }
        return max_len;
    }
};
// time complexity is O(n) where n is the number of elements in the array
// space complexity is O(n) for storing the prefix sums in the unordered_map