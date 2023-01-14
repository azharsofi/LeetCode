class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxw=0;
        int w=0;
        int r=accounts.size();
        int c=accounts[0].size();
        for(int i=0;i<r;i++){
            w=0;
            for(int j=0;j<c;j++){
                w=w+accounts[i][j];
                maxw=max(maxw,w);
            }
        }
        return maxw;
    }
};
