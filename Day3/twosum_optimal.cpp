class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> temp;
        
        // Store values along with their original indices
        for(int i = 0; i < n; i++){
            temp.push_back({nums[i], i});
        }
        
       
        sort(temp.begin(), temp.end());
        
        int start = 0;
        int end = n - 1;
      
        while(start < end){
            int sum = temp[start].first + temp[end].first;
            if(sum == target){
                return {temp[start].second, temp[end].second};
            } else if(sum > target){
                end--; 
            } else {
                start++;
            }
        }
        return {};
    }
};
// time complexity is O(n log n) due to sorting
// space complexity is O(n) for storing the temporary array of pairs
