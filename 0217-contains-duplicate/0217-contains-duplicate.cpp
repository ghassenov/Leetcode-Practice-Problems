class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // first we can sort the array
        sort(nums.begin(),nums.end());
        // then we check for adjacent elements
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};