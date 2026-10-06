class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        int n = s.length();
        int m = t.length();
        if(n != m) return false;

        for(auto x:s){
            mp[x]++;
        }
        for(auto y:t){
            if(mp.find(y) == mp.end())return false;
            else if(mp[y] == 0)return false;
            else mp[y]--;
        }
        return true;
        


    }
};