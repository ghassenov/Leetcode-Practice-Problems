class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        stack<string> st;
        string curr="";
        string ans = "";
        for(char x:s){
            if(x != ' '){
                curr += x;
            }
            else{
                if(curr == "")continue;
                else{
                    st.push(curr);
                    curr = "";
                }
            }
        }
        if(!curr.empty()) st.push(curr);
        while(!st.empty()){
            ans += st.top();
            ans += " ";
            st.pop();
        }
        ans = ans.substr(0,ans.length()-1);
        return ans;

    }
};