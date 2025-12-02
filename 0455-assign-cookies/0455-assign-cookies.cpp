class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n1 = g.size();
        int n2 = s.size();

        int p1 = n1-1;
        int p2 = n2-1;
        int count = 0;

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(p1>=0 && p2>=0){
            if(s[p2] >=g[p1]){
                count++;
                p2--;
                p1--;
            }
            else{
                p1--;
            }
        }
        return count;
    }
};