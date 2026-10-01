class Solution {
public:
    bool condition(vector<int> & nums,int d,int threshold){
        int s = 0;
        for(auto x:nums){
            s += ceil((double)x/d);
        }
        return s <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int l = 1;
        int r = *max_element(nums.begin(),nums.end());
        int ans = -1;

        while(l <= r){
            int m = l + (r-l)/2;
            if(condition(nums,m,threshold)){
                ans = m;
                // we need to find smallest divisor satisfying condition
                r = m-1;
            }
            else l = m+1;

        }
        return ans;
    }
};