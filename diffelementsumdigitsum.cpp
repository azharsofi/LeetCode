class Solution {
public:
   int num(vector<int>& nums){
       int s=0;
       for(int i=0;i<nums.size();i++)
       {
          s+=nums[i] ;
       }
       return s;
   }
   int digit(vector<int>& nums){
       int s=0;
       int d;
        for(int i=0;i<nums.size();i++){
       while(nums[i]!=0){
           d=nums[i]%10;
           nums[i]=nums[i]/10;
           s=s+d;
           
           
       }
   }
   return s;}


    int differenceOfSum(vector<int>& nums) {
        int n=num(nums);
        int d=digit( nums);
        int ab=abs(n-d);
        return ab;
        
    }
};
