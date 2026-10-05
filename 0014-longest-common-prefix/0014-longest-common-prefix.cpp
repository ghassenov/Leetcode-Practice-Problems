class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return "";
        string prev = strs[0];
        int prev_len = prev.size();

        for(int i=1;i<n;i++){
            string s = strs[i];
            while(prev_len > s.length() || prev != s.substr(0,prev_len)){
                prev_len--;
                if(prev_len == 0) return "";
                prev = prev.substr(0,prev_len);

            }
        }
        return prev;
    }
};