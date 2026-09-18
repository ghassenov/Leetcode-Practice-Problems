class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int temp = 0;
        for(int i=0;i<n;i++){
            if(nums[i] != 1){
                ans = max(ans,temp);
                temp = 0;
            }
            else temp++;
        }
        ans = max(ans,temp);
        return ans;
    }
};