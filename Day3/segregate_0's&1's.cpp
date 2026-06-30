class Solution {
    int segregate0and1(vector<int> &arr) {
        // code here
        // Arrays.sort(arr);
        int ind=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                int t=arr[i];
                arr[i]=arr[ind];
                arr[ind]=t;
                ind++;
            }        
        }  
        return ind;
    }
}
