class Solution{
    public:
    // use recursion to check if a string is palindrome or not
    bool isPalindrome(string s, int start, int end) {
        // base case
        if(start >= end){
            return true;
        }
        // recursive case
        if(s[start] != s[end]){
            return false;
        }
        return isPalindrome(s, start+1, end-1);
    }
    // main function
    int main() {
        string s;
        cout<<"Enter a string: ";
        cin>>s;

        // check if the string is palindrome or not
        bool ans=isPalindrome(s, 0, s.length()-1);
        if(ans){
            cout<<s<<" is a palindrome"<<endl;
        }else{
            cout<<s<<" is not a palindrome"<<endl;
        }
        return 0;
    }
};
// time complexity is O(n)
// space complexity is O(n) for the recursion stack

//  geeks for geeks solution
