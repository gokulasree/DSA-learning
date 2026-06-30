
// optimized solution
class Solution {
public:

    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxarea=INT_MIN;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            int area=w*h;
            maxarea=max(area,maxarea);
            if(height[l]<height[r]){
                l++;
            }else{
             r--;}
        }
        return maxarea;
    }
};  