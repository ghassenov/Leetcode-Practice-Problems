class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mp;
        int prefix = 0;
        mp[prefix]++;
        int ans = 0;

        for(auto x:nums){
            prefix += x;
            if(mp.find(prefix-k) != mp.end()){
                ans+= mp[prefix-k];
            }
            mp[prefix]++;
        }
        return ans;
    }
};