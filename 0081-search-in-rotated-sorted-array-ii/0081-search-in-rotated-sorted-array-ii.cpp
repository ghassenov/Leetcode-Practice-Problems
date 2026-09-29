class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n-1;

        while(l <= r){
            int m = l + (r-l)/2;
            if(nums[m] == target) return true;
            if(nums[m] == nums[l]){
                // duplicate
                l++;
                continue;
            }
            // check that nums[l]..nums[m] subarray sorted
            else if(nums[l] < nums[m]){
                // check that target can be included
                if(nums[l] <= target && target < nums[m]){
                    // if yes search in that space
                    r = m-1;
                }
                else{
                    // target is in the space nums[m]..nums[r]
                    l = m+1;
                }
            }
            else{
                // nums[l]..nums[m] contains the pivot
                // we can then check the right space if it contains target
                if(nums[m] < target && target <= nums[r]){
                    l = m+1;
                }
                else r = m-1;
            }
        }
        return false;
    }
};