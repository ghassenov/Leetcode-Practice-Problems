class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 1;
        int k = 1;
        int pos = 0;
        for(int i = 1;i<n;i++){
            if(nums[i] != nums[pos]){
                nums[pos+1] = nums[i];
                pos++;
                k++;
            }
        }
        return k;
    }
};