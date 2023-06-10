
class Solution {
   private:
    void solve(vector<int> nums, vector<int> output,int index, vector<vector<int>> &ans){
        //base case
        if(index==nums.size()){
            ans.push_back(output);
        return;
        }
        
        //include
        int e=nums[index];
        output.push_back(e);
        
        solve(nums,output,index+1,ans);
        output.pop_back();

        while(index+1<nums.size()&&nums[index]==nums[index+1])
        index++;
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};
