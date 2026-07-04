class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int l=0;
        int r=n;
        while(l<r){
            if(nums[l] == val){
                nums[l] = nums[--r];
            }else{
                l++;
            }
        }
        return r;
    }
};