class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        auto it1 = lower_bound(nums.begin(),nums.end(),target);
        auto it2 = upper_bound(nums.begin(),nums.end(),target);

        vector<int> ans;
        if(it1 == nums.end()|| *it1 != target || *(it2-1) != target ){
            ans.push_back(-1);
            ans.push_back(-1);

            return ans;
        }
        ans.push_back(it1-nums.begin());
        ans.push_back(it2-nums.begin()-1);
        return ans;
        

    }
};