class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // BS to find index of the row where target exists
        int n = matrix.size();
        int m = matrix[0].size();
        bool ans = false;
        int idx = 0;

        int l = 0;
        int r = n-1;

        while(l <= r){
            int mid = l + (r-l)/2;
            if(matrix[mid][0] <= target){
                idx = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        // BS on that row
        l = 0;
        r = m-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(matrix[idx][mid] == target) return true;
            else if(matrix[idx][mid] > target) r = mid-1;
            else l = mid+1;
        }
        return false;
    }
};