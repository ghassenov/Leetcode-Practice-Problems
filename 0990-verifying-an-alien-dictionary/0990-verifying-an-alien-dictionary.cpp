class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n = order.size();
        map<char,int> mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        // store characters by order of appearence,
        // if mp[s1] < mp[s2] then s1 appears before s2 in
        // the dictionary

        for(int i=0;i<words.size()-1;i++){
            string s1 = words[i];
            string s2 = words[i+1];

            int k = 0;
            for(;k<s1.size();k++){
                if(k == s2.size()) return false; // if s2 shorter than s1
                if(s1[k] != s2[k]){
                    if(mp[s1[k]] > mp[s2[k]]) return false;
                    break;
                }
            }
        }
        return true;
    }
};