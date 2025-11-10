class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        map<char,int> mp2;
        for(char x:s){
            mp[x]++;
        }
        for(auto x:t){
            mp2[x]++;
        }
        if(mp.size() != mp2.size()){
            return false;
        }
        for(auto x:mp){
            if(x.second != mp2[x.first]){
                return false;
            }
        }
        return true;
        
    }
};