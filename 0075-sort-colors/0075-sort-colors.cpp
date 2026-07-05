class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        int blue = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == 0)red++;
            else if(nums[i] == 1)white++;
            else blue++;
        }
        int k = 0;
        while(red--){
            nums[k] = 0;
            k++;
        }
        while(white--){
            nums[k] = 1;
            k++;
        }
        while(blue--){
            nums[k] = 2;
            k++;
        }
    }
};