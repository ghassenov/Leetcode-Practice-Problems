class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int i=0;
        for(auto x:mp){
            for(int j=0;j<x.second;j++){
                nums[i] = x.first;
                i++;
            }
        }
    }
};