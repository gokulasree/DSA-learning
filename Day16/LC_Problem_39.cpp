class Solution {
    void getCombinations(vector<int>& candidates,int idx,int target,vector<int> output,vector<vector<int>>& finalOutput){
        if(idx==candidates.size()){
            if(target==0){
                finalOutput.push_back(output);
            }
            return;
        }
        if(candidates[idx]<=target){
            output.push_back(candidates[idx]);
            getCombinations(candidates,idx,target-candidates[idx],output,finalOutput);
            output.pop_back();
        }

        getCombinations(candidates,idx+1,target,output,finalOutput);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> finalOutput;
        vector<int> output;
        getCombinations(candidates,0,target,output,finalOutput);
        return finalOutput; 
    }
};
// time complexity is O(2^n) where n is the number of elements in the candidates array
// space complexity is O(n) for the recursion stack and O(k) for storing the output