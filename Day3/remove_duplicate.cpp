class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //   int n=nums.size();
    int idx=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            idx++;
            nums[idx]=nums[i];
        }
    }
    return idx+1;
    }
};
// int i=0,j=0;
// while(j<n){
//         if(nums[i]!=nums[j]){
//             int t=nums[i+1];
//             nums[i+1]=nums[j];
//             nums[j]=t;
//             i++;
//             j++;
//         }
//         else
//         {
//             j++;
//         }
//       }  
//       return i+1;
// time complexity is O(n) where n is the number of elements in the array
// space complexity is O(1) as we are using constant extra space
