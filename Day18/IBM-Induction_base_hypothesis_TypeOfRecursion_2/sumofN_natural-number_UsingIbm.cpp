class Solution {
  public:
   
//   use recursion to find the sum of first n natural numbers
    int sum(int n) {
        // base case
        if(n==0){
            return 0;
        }
        // recursive case
        return n+sum(n-1);
    }
    //  main function 
    int main() {
        int n;
        cout<<"Enter n: ";
        cin>>n;

        // find the sum of first n natural numbers
        int ans=sum(n);
        cout<<"Sum of first "<<n<<" natural numbers is: "<<ans<<endl;
        return 0;
    }
};
// time complexity is O(n) 
// space complexity is O(n) for the recursion stack