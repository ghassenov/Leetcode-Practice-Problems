class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int n = nums.size();

        while(l<=r){
            int m = (l+r)/2;
            if((m-1<0 || nums[m-1] != nums[m]) && 
            (m+1 == nums.size()|| nums[m] != nums[m+1])) return nums[m];    
            int leftsize = (m-1 >=0 && nums[m-1] == nums[m]) ? m-1 : m;
            if (leftsize %2 == 1){
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        return -1;

    }
};