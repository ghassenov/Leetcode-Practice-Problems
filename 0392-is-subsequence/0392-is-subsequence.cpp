class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ns = s.size();
        int nt = t.size();
        int ls = 0;
        int lt = 0;
        while(ls <= ns-1 && lt<=nt-1){
            if(s[ls] == t[lt]){
                ls++;
                lt++;
            }
            else{
                lt++;
            }

        }
        if(ls == ns){
            return true;
        }
        else return false;
    }
};