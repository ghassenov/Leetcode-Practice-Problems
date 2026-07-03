class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(n != m) return false;
        for(int i=0;i<n;i++){
            if(t[i] != s[i]) return false;
        }
        return true;


    }
};