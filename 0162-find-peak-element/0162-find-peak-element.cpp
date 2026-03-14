class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long n = nums.size();
        long long l = 0;
        long long r = n-1;
        long long m;

        while(l<=r){
            m = (l+r)/2;
            if(m>0 && nums[m] < nums[m-1]){
                r = m-1;
            }
            else if(m < n-1 && nums[m] < nums[m+1]){
                l = m+1;
            }
            else return m;
        }
        return -1;
    }
};