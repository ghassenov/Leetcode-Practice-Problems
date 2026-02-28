class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int p = n-1;

        int ans = -1;
        while(l<=p && ans == -1){
            int m = (l+p)/2;
            if(nums[m] == target){
                ans = m;
                break;
            }
            else if(nums[m] > target){
                p = m-1;
            }
            else{
                l = m+1;
            }
        }
        return ans;
    }
};