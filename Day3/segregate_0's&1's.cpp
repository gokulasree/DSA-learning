class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> temp1;
        vector<int> temp2;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                temp1.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                temp2.push_back(arr[i]);
            }
        }
        int a=0;
        for(int i=0;i<temp1.size();i++){
            arr[a]=temp1[i];
            a++;
        }
        for(int i=0;i<temp2.size();i++){
            arr[a]=temp2[i];
            a++;
        }
    }
};
// time complexity is O(n) 
// space complexity is O(n) for storing the temporary arrays
