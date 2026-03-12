class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int l = 0;
        int r = 0;
        int maxlen = 0;

        int n = s.size();
        while(r<n){
            while(charset.find(s[r]) != charset.end()){
                charset.erase(s[l]);
                l++;
            }
            charset.insert(s[r]);
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;

    }
};