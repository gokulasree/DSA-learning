class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            char c=s[i];
            st.push(c);
        }
        string ans=" ";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
// time complexity is O(n) where n is the length of the string
// space complexity is O(n) as we are using a stack to store the characters of the