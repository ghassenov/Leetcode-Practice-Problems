class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        int curr = 1;
        if(n == 0) return 0;
        if(n == 1) return 1;
        set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        for(auto x:s){
            if(s.find(x+1) != s.end()){
                curr++;
            }
            else{
                ans = max(ans,curr);
                curr = 1;
            }
        }
        return ans;
    }
};