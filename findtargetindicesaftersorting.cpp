class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> a;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target)
            a.push_back(i);
        }
        return a;
    
    a.clear();
    return a;}
};
