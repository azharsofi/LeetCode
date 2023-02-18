class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int l=0;
        int r=height.size()-1;
        int area;
        while(l<r){
            int lm=min(height[l],height[r]);
            int w=(r-l);
            area=lm*w;
            if(area>maxarea)
            maxarea=area;
            if(height[l]<height[r])
            l++;
            else
            r--;

        }
        return maxarea;
        
    }
};
