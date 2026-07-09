class Solution {
public:
    void allSubsets(vector<int> nums,int idx,vector<int> output,vector<vector<int>>&  finaloutput){
        // base case
        if(idx==nums.size()){
            finaloutput.push_back(output);
            return;
        }
        // include
        output.push_back(nums[idx]);
        allSubsets(nums,idx+1,output,finaloutput);
        // not include
        output.pop_back();
        allSubsets(nums,idx+1,output,finaloutput);
    } 
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> finaloutput;
        vector<int> output;
        allSubsets(nums,0,output,finaloutput);
        return finaloutput;
    }
};
// time complexity is O(2^n) where n is the number of elements in the nums array  
// space complexity is O(n) for the recursion stack and O(k) for storing the output