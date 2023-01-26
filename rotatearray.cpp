class Solution {
public:
void reverse(vector<int>& nums,int s,int h){
    while(s<h){
        swap(nums[s],nums[h]);
        s++;
        h--;

    }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
        

    }
};
