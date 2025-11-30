class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string result = "";

        int p1 = 0;
        int p2 = 0;
        while(p1 <n1 && p2<n2){
            result += word1[p1];
            result += word2[p2];
            p1++;
            p2++;
        }
        if(p1 == n1){
            // complete with the rest of word2
            while(p2<n2){
                result += word2[p2];
                p2++;
            } 
        }
        else{
            while(p1<n1){
                result += word1[p1];
                p1++;
            } 
        }
        return result;
    }
};