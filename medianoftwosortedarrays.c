double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int s=nums1Size+nums2Size;
    int c[s];
    int i=0,j=0,k=0;
    while(i<nums1Size&&j<nums2Size){
        if(nums1[i]<nums2[j]){
            c[k]=nums1[i];
            k++;
            i++;
            
        }
        else{
            c[k]=nums2[j];
            k++;
            j++;
        }
    }
    for(;i<nums1Size;i++){
        c[k++]=nums1[i];
    }
    for(;j<nums2Size;j++){
        c[k++]=nums2[j];
    }
    int mid=(s-1)/2;
    if(s%2!=0)
        return c[mid];
    else 
        return ((float)(c[mid]+c[mid+1])/2);

}