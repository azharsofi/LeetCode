class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
         vector<vector<int>> a;
         

         int n=arr.size();
         sort(arr.begin(),arr.end());
         
            int min=INT_MAX;
          for(int i=0;i<n-1;i++){
             if(abs(arr[i]-arr[i+1])<=min)
             min=abs(arr[i]-arr[i+1]);
             }
         for(int i=0;i<n-1;i++){
             if(abs(arr[i]-arr[i+1])<=min){
             min=abs(arr[i]-arr[i+1]);
             a.push_back({arr[i],arr[i+1]});}
         }
        
        return a;
    }
};
