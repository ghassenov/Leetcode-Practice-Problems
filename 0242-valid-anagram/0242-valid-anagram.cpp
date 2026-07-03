class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        if(n != m) return false;
        int count[26] = {0};
        for(auto x: s){
            count[x-'a']++;
        }
        for(auto x:t){
            if(count[x-'a'] == 0)return false;
            else count[x-'a']--;
        }
        return true;
    }
};