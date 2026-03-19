class Solution {

private:
    int f(int idx, string &s, unordered_map<int,int> &dp){
        if(dp.count(idx)) return dp[idx];
        if(s[idx] == '0') return 0;

        int res = f(idx+1,s,dp);
        if(idx < s.size()-1){
            if(s[idx] == '1' ||
             (s[idx] == '2' && s[idx+1] <'7')){
                res += f(idx+2,s,dp);
            }
        }
        return dp[idx] = res;
    }
public:
    int numDecodings(string s) {
        // use a dictionary dp, where dp[i] = number of ways to
        // decode s[i:]
        unordered_map<int,int> dp;
        dp[s.size()] = 1;
        return f(0,s,dp);
        
    }
};