class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int p1= 0;
        int p2 =1;
        while(p2<n){
            if(nums[p1] == 0 && nums[p2]!= 0){
                int temp = nums[p1];
                nums[p1] = nums[p2];
                nums[p2] = temp;
                p1++;
                p2++;
            }
            else if(nums[p1] !=0){
                p1++;
                p2++;
            }
            else{
                p2++;
            }
        }
    }
};