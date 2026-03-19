class Solution {
private:
    int f(int idx,vector<int> &nums,vector<int>&dp){
        if(idx == 0) return nums[0];
        if(idx < 0) return 0;
        if(dp[idx] != -1) return dp[idx];

        int left = f(idx-1,nums,dp);
        int right;
        right = nums[idx] + f(idx-2,nums,dp);
        return dp[idx] = max(left,right);
        
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp1(n,-1),dp2(n,-1);
        vector<int> nums1,nums2;
        for(int i=0;i <n;i++){
            if(i!=0)nums1.push_back(nums[i]);
            if(i!=n-1) nums2.push_back(nums[i]);
        }
        return max(f(n-2,nums1,dp1),f(n-2,nums2,dp2));
    }
};