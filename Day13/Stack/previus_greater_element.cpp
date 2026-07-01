class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        stack<int> st;
        vector<int> ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int elem=arr[i];
            if(st.size()==0){
                ans.push_back(-1);
            }else if(st.size()>0 && st.top()>elem){
                ans.push_back(st.top());
            }else if(st.size()>0 && st.top()<=elem){
                while(st.size()>0 && st.top()<=elem){
                    st.pop();
                }
                if(st.size()==0){
                    ans.push_back(-1);
                }else{
                    ans.push_back(st.top());
                }
            }
            st.push(elem);
        }
        return ans;
    }
};
// time complexity is O(n) where n is the number of elements in the array
// space complexity is O(n) as we are using a stack to store the elements of the