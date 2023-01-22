class Solution {
public:
 vector<int> searchRange(vector<int>& nums, int target) {
  vector<int> a;
int fs=fp(nums,target);
int ls=lp(nums,target);
a.push_back(fs);
a.push_back(ls);
return a;}

  int fp(vector<int>& nums, int target) {
  int n=nums.size();
  int res=-1;
  int s=0;
  int e=n-1;
  while(s<=e){
      int m=s+(e-s)/2;
      if(nums[m]==target){
      res=m;
      e=m-1;}
      else if(target>nums[m])
      s=m+1;
      else
      e=m-1;

  }
  return res;
  }
   int lp(vector<int>& nums, int target){
   int n=nums.size();
  int res=-1;
  int s=0;
  int e=n-1;
  while(s<=e){
      int m=s+(e-s)/2;
      if(nums[m]==target){
       res=m;
      s=m+1;}
      else if(target>nums[m])
      s=m+1;
      else
      e=m-1;

  }
  return res;}
    
    
};
