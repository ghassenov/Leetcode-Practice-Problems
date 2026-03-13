class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r = nums.size()-1;

        while(l<r){
            int m = (l+r)/2;
            if(nums[m]>nums[r]){
                l = m+1;
            }
            else{
                r = m;
            }
        }
        // now l holds the pivot position
        int pivot = l;

        int res = binarySearch(nums,target,0,pivot-1);
        if(res != -1){
            return res;
        }
        return binarySearch(nums,target,pivot,nums.size()-1);
    }
    int binarySearch(vector<int> &nums,int target,int left,int right){
        while(left<=right){
            int m = (left+right)/2;
            if(nums[m] == target)return m;
            else if(nums[m]<target){
                left = m+1;
            }
            else{
                right = m-1;
            }
        }
        return -1;
    }
};