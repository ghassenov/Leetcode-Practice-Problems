class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for(int i=1;i<n;i++){
            int x = nums[i];
            // choose whether we include x in current max, min or start a new subarray with x
            int prev = maxProd;
            maxProd = max({x,maxProd*x,minProd*x});
            minProd = min({x,prev*x,minProd*x});

            ans = max(ans,maxProd);
        }
        return ans;
    }
};