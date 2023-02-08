class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
 
        int n = nums.size();
        int sum = 0;
        for (int num : nums) sum += num;
        int left_sum = 0;
        for (int i = 0; i < n; i++) {
            if (left_sum == sum - left_sum - nums[i]) return i;
            left_sum += nums[i];
        }
        return -1;
    
        
    }

