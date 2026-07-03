class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='('||c=='{'||c=='['){
                st.push(c);
            }else {
                if(st.size()==0) return false;

                bool case1 = c==')' && st.top()=='(';
                bool case2 = c=='}' && st.top()=='{';
                bool case3 = c==']' && st.top()=='[';

                if(case1 || case2 || case3) st.pop();
                else return false;
            }
        }
        if(st.size()==0) return true;
        else return false;
    }
};
// time complexity is O(n) where n is the number of characters in the string
// space complexity is O(n) as we are using a stack to store the opening brackets