class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = nums[0];
        int l =0;
        int r = nums.size()-1;


        while(l <= r){
            // case if the array is not rotated, the min
            // will the first case.
            if(nums[l] < nums[r]){
                res = min(res,nums[l]);
            }

            int m = (l+r)/2;
            // case when nums[m] can be the minimum
            res = min(res,nums[m]);

            // with the deflection point, we have two sorted subarrays
            // one subarray >= every element of the second one.
            //if nums[m] larger than nums[l] we search right
            if(nums[m] >= nums[l]){
                l = m+1;
            }
            else{
                r = m-1;
            }

        }
        return res;
    }
};