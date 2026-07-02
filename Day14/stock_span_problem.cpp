class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<pair<int,int>> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int elem=arr[i];
            if(st.size()==0){
                ans.push_back(i+1);
            }else if(st.size()>0 && st.top().first>elem){
                ans.push_back(i-st.top().second);
            }else if(st.size()>0 && st.top().first<=elem){
                while(st.size()>0 && st.top().first<=elem){
                    st.pop();
                }
                if(st.size()==0){
                    ans.push_back(i+1);
                }else{
                     ans.push_back(i-st.top().second);
                }
            }
            st.push({elem,i});
        }
        return ans;
    }
};
// time complexity is O(n) where n is the number of elements in the array
// space complexity is O(n) as we are using a stack to store the elements of the array