class Solution {
private:
    int f(int idx, vector<int> &cost, vector<int> &dp){
        if(idx == 0) return cost[0];
        if(idx == 1) return cost[1];

        if(dp[idx] != -1) return dp[idx];

        int left = cost[idx] + f(idx-1, cost, dp);
        int right = cost[idx] + f(idx-2, cost, dp);

        return dp[idx] = min(left, right);
    }

public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);

        return min(f(n-1, cost, dp), f(n-2, cost, dp));
    }
};