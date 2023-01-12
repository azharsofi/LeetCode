class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int minp=prices[0];
        int cost=0;
        int n =prices.size();
        for(int i=1;i<n;i++){

        cost=prices[i]-minp;
        maxp=max(cost,maxp);
        minp=min(minp,prices[i]);
        
        }
        return maxp;
        
    }
};
