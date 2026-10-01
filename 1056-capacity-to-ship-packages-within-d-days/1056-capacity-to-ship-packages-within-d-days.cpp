class Solution {
public:
    int nDays(vector<int>& weights,int c){
        int days = 1;
        int s = 0;
        for(auto x:weights){
            if(s+x <= c){
                s += x;
            }
            else{
                days++;
                s = x;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int l = *max_element(weights.begin(),weights.end());
        int r = accumulate(weights.begin(),weights.end(),0);
        int ans = 0;

        while(l <= r){
            int m = l + (r-l)/2;
            if(nDays(weights,m) <= days){
                ans = m;
                r = m-1;
            }
            else l = m+1;
        }
        return ans;
    }
};