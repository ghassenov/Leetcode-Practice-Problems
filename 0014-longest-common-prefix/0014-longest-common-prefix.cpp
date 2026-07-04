class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        // first word is strs[0]
        int n = strs[0].size();
        int m = strs.size();
        for(int i=0;i<n;i++){
            // check the other strings
            for(auto st:strs){
                if(i == st.size() || st[i] != strs[0][i]){
                    return res;
                }
            }
            // all strings have the same char
            res += strs[0][i];
        }
        return res;
    }
};