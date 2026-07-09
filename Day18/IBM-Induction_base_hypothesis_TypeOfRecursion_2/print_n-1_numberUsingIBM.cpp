class Solution{
    public:
    //  use recursion to print the numbers from 1 to n  
    int printNumbers(int n) {
        // base case
        if(n==0){
            return 0;
        }
        // recursive case
        printNumbers(n-1);
        cout<<n<<" ";
    }
    // main function
    int main() {
        int n;
        cout<<"Enter n: ";
        cin>>n;

        // for print the numbers from 1 to n
        cout<<"Numbers from 1 to "<<n<<" are: ";
        printNumbers(n);
        cout<<endl;

        return 0;
    }
};
// time complexity is O(n)
// space complexity is O(n) for the recursion stack