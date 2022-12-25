int searchInsert(int* nums, int numsSize, int target){
    int s=0;
    int e=numsSize-1;
            
             while(s<=e){
                        int m=s+(e-s)/2;
                        if(nums[m]==target)
                         return m;
                        if(target>nums[m])
                        s=m+1;
                        else
                        e=m-1;
                        
                    }
                    return e+1;

}
