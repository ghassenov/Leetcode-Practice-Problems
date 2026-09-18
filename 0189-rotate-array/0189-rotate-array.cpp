class Solution {
private:
    void reverse(vector<int> &nums,int l,int r){
        while(r>l){
            swap(nums[r],nums[l]);
            r--;
            l++;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= nums.size();
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};