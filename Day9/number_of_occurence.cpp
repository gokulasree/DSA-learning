class Solution {

    int firstOccurence(vector<int>& arr,int k)
    {
        int n=arr.size();
        int ans=-1;
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k){
                ans=mid;
                e=mid-1;
            }else if(k<arr[mid]){
                e=mid-1;
            }else{
               s=mid+1;
            }
        }
        return ans;
    }
    int lastOccurence(vector<int>& arr,int k)
    {
        int n=arr.size();
        int ans=-1;
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k){
                ans=mid;
                s=mid+1;
            }else if(k<arr[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int count=0;
        
        int first_occ=firstOccurence(arr,target);
        //int last_occ=lastOccurence(arr,target);
        
         if (first_occ == -1) {
            return 0;   
        }

        int last_occ = lastOccurence(arr, target);

        return last_occ - first_occ + 1;
        
    }
};
