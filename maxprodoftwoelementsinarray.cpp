class Solution {
public:
int max1(vector<int>& nums){
    int lar=-1;
    int i1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>lar){
            lar=nums[i];
            i1=i;
        }


    }
    return i1;
}
int max2(vector<int>& nums){
    int lar=-1;
    int i2;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>lar){
            lar=nums[i];
             i2=i;
        }


    }
    return i2;
}
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int index1=max1(nums);
        int lk=nums[index1];
        nums[index1]=-1;
        int index2=max2(nums);
        int sk=nums[index2];
        int ans=(lk-1)*(sk-1);
        return ans;
    }
};
