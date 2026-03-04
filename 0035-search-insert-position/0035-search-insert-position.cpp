class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int k = n;
        int a = 0;
        int b = n - 1;

        while(a <= b){
            int m = (a+b)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m] > target){
                // target may exist in [a..m-1]
                k = m;
                b = m-1;
            }
            else{
                // target may exist in [m+1..b]
                a = m+1;
            }
        }
        return k;
        

    }
};