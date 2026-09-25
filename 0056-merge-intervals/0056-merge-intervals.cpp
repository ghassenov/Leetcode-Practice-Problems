class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;

        for(auto &interval: intervals){
            // no interval yet or no overlap -> add it to ans
            if(ans.empty() || ans.back()[1] < interval[0]){
                ans.push_back(interval);
            }
            else{
                // overlap -> extend the interval
                ans.back()[1] = max(ans.back()[1],interval[1]);
            }
        }
        return ans;
    }
};