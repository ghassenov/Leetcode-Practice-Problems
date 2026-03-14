class Solution {
public:
    int arrangeCoins(int n) {
        long long l=1;
        long long r=n;
        long long largest = 1;
        long long m;

        while(l < r){
            m = (l+r)/2;
            if(m*(m+1)/2 <= n){
                // here m is a valid candidate
                largest = max(largest,m);
                // look at larger candidates
                l = m+1;
            }
            else r=m;
        }
        return largest;
        
    }
};