class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }

        vector<pair<int,int>> arr;
        for(auto x: mp){
            arr.push_back({x.second,x.first});
        }

        sort(arr.rbegin(),arr.rend());

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }

        return res;
    }
};