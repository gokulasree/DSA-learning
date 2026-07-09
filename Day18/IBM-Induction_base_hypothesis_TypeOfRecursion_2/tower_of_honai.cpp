class Solution {
  public:
    void towerOfHanoi(int n, char source, char helper, char destination) {
        // base case
        if (n == 1) {
            cout << "Move disk 1 from " << source << " to " << destination << endl;
            return;
        }
        // recursive case
        towerOfHanoi(n - 1, source, helper, destination);  
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        towerOfHanoi(n - 1, helper, destination, source);  
    }
    int main() {
        
        int n;
        cout << "Enter the number of disks: ";
        cin >> n;
        towerOfHanoi(n, 'A', 'B', 'C');  
        return 0;
    }
};
// time complexity is O(2^n)
// space complexity is O(n) for the recursion stack