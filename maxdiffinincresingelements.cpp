class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int m=nums[0];
        int lar=-1;
        for(int j=1;j<nums.size();j++){
            int diff=nums[j]-m;
            lar=max(lar,diff);
            m=min(m,nums[j]);
        }
        return lar==0?-1:lar;
        
    }
};
