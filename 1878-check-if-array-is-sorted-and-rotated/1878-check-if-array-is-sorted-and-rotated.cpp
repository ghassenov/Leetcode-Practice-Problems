class Solution {
public:
    bool check(vector<int>& nums) {
        // we can calculate the number of inversion (i<j && arr[i]>arr[j]) (don't miss arr[0] && arr [n-1] if exists an inversion)
        // if n = 0 then we have the original array,
        // if n = 1 return true
        // else return false
        int n = nums.size();
        int n_inversion = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) n_inversion++;
        }
        if(n_inversion == 0) return true;
        else if(n_inversion == 1){
            if(nums[0] < nums[n-1]) return false;
            else return true;
        }
        else return false;
    }
};