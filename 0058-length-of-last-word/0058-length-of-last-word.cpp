class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        // find the first char from behind
        int i = n-1;
        while(i>=0){
            if(s[i]==' ') i--;
            else break;
        }
        // now we can look for the size of the word
        while(i>=0){
            if(s[i] == ' '){
                break;
            }
            count++;
            i--;
        }
        return count;
    }
};