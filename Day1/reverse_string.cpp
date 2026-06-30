// time complexity is O(n)
// space complexity is O(1)
class Solution {
public:
    void reverseString(vector<char>& s) {
        int a = s.size();
        int start = 0;
        int end = a-1;
        while(start <=end){
            char t = s[start];
            s[start]=s[end];
            s[end]=t;
            start++;
            end--;
        }
    }
};
