class Solution {
public:
    bool check(vector<int>& nums) {
        // we can count the number of infliction points
        // if number equals 0 or 1 then true
        // if infliction point >1 then no
        int n = nums.size();
        int n_inflictions = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) n_inflictions++;
        }
        if(nums[0]<nums[n-1]) n_inflictions++;
        if(n_inflictions > 1) return false;
        else return true;
    }
};