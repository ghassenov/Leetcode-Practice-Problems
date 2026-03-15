class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        dfs(0,nums,subset,res);
        return res;
    }
private:
    void dfs(int i,const vector<int> &nums,vector<int>&subset,vector<vector<int>> &res){
        if(i == nums.size()){
            res.push_back(subset);
            return;
        }
        // first case add the element
        subset.push_back(nums[i]);
        dfs(i+1,nums,subset,res);
        // 2nd case: don't add the element
        subset.pop_back();
        dfs(i+1,nums,subset,res);
    }
};