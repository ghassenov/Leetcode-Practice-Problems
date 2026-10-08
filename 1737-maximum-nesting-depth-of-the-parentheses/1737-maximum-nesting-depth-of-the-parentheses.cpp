class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int count = 0;
        for(auto x:s){
            if(x == '('){
                count++;
                ans = max(ans,count);
            }
            else if(x == ')') count--;
        }
        return ans;
    }
};