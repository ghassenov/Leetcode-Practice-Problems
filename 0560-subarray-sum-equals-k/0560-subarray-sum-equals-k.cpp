class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        map<int,int> mp;
        int prefix = 0;
        mp[prefix]++;
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