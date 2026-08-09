class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // majority element is the element appearing more than [n/2]
        int ans = -1;
        int n = nums.size();
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
            if(mp[x] > n/2) ans = x;
        }
        return ans;
    }
};