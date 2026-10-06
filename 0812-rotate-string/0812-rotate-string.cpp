class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int k = n;

        for(int i=0;i<=k;i++){
            if(s == goal) return true;
            else{
                s = s.substr(1,n-1) + s[0];
            }
        }
        return false;
    }
};