class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mx = INT_MIN;
        int ans = -1;
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
            if(mx<= mp[x]){
                mx = mp[x];
                ans = x;
            }

        }
        return ans;

    }
};