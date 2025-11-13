class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> mp;
        vector<int> v;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            mp.insert({nums[i], i});
        }
        
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = n - 1;
        
        while(l < r) {
            int s = nums[l] + nums[r];
            if(s == target) {
                auto it1 = mp.find(nums[l]);
                int idx1 = it1->second;
                mp.erase(it1); 
                
                auto it2 = mp.find(nums[r]);
                int idx2 = it2->second;
                
                v.push_back(idx1);
                v.push_back(idx2);
                return v;
            }
            else if(s < target) {
                l++;
            }
            else {
                r--;
            }
        }
        return {};
    }
};