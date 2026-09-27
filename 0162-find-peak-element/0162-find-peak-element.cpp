class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        int l = 0;
        int r = n-1;
        if(n == 1) return 0;
        if(n == 2){
            if(nums[0] < nums[1]) return 1;
            else return 0;
        }

        int ans = -1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(mid == 0){
                if(nums[mid] > nums[mid+1]){
                    return mid;
                }
                else{
                    l = mid+1;
                }
            }
            else if(mid == n-1){
                if(nums[mid] > nums[mid-1]){
                    return mid;
                }
                else{
                    r = mid-1;
                }
            }
            else{
                // mid in [1..n-2]
                if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                    return mid;
                }
                else if(nums[mid+1] > nums[mid]){
                    // move in the direction of the largest
                    l = mid+1;
                }
                else r = mid-1;
            }
        }
        return ans;
    }
};