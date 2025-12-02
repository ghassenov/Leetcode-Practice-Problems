class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0;
        int p2 = n - 1;
        int p3 = n - 1;
        vector<int> res(n, 0);

        while (p1 <= p2) {
            if (abs(nums[p2]) > abs(nums[p1])) {
                res[p3--] = nums[p2] * nums[p2];
                p2--;
            }
            else {
                res[p3--] = nums[p1] * nums[p1];
                p1++;
            }
        }

        return res;
    }
};
