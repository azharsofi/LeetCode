class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums){
            m[x]++;
        }
        int s=0;
        for(auto x:m){
            if(x.second==1)
            s=s+x.first;
        }
        return s;

    }
};
