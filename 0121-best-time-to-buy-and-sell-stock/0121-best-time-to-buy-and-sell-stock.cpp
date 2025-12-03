class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int l=0;
        int r=1;
        while(r<n){
            if(prices[l]>prices[r]){
                l=r;
                r++;
            }
            else{
                profit = max(profit,prices[r]-prices[l]);
                r++;
            }
        }
        return profit;
    }
};