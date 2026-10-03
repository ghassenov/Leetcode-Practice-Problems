class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string ans = "";
        int balance = 0;

        for(auto x:s){
            if(x == '('){
                if(balance > 0){
                    ans += x;
                }
                balance++;
            }
            else{
                balance--;
                if(balance > 0){
                    ans += x;
                }
            }
        }
        return ans;
    }
};