class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return;
        int i=0;
        while(i<n && nums[i] != 0){
            i++;
        }
        if(i == n) return;
        else{
            int j = i+1;
            while(j<n){
                if(nums[j] != 0){
                    nums[i] = nums[j];
                    nums[j] = 0;
                    i++;
                }
                j++;
            }
        }


    }
};