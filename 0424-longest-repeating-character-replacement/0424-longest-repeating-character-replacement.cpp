class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0;
        int r = 0;
        unordered_map<char,int> mp;

        int ans = 0;
        int maxf = 0;
        while(r<n){
            // we are looking for the longest window size
            // n_replacements = size - max_char_occurence <= k
            // we keep extending the window(r++) until the
            // condition fails, then we move (l++) and update the map until we
            // satisfy the condition.
            mp[s[r]]++;
            maxf = max(maxf,mp[s[r]]);

            while((r-l)+1 - maxf > k){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans,(r-l+1));
            r++;

        }
        return ans;
    }
};