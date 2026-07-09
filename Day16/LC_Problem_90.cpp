class Solution {
public:
   void allsubset(vector<int>nums,int idx,vector<int>&output,vector<vector<int>>&finalOutput){
    if(idx==nums.size()){
        finalOutput.push_back(output);
        return;
    }
    
    output.push_back(nums[idx]);
    allsubset(nums,idx+1,output,finalOutput);
    
    output.pop_back();
    int nextidx=idx+1;
    while(nextidx<nums.size() && nums[nextidx]==nums[idx]){
        nextidx++;
    }
    allsubset(nums,nextidx,output,finalOutput);
   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>finalOutput;
        vector<int>output;
        allsubset(nums,0,output,finalOutput);
        return finalOutput;
    }
};
// time complexity is O(2^n) where n is the number of elements in the nums array
// space complexity is O(n) for the recursion stack and O(k) for storing the output