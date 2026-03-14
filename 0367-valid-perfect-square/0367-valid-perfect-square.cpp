class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=1;
        long long r=num;
        long long m;
        long long ans=0;

        // find largest m; m^2 <= num; if m^2 == num then true else false.
        if(num == 1) return true;
        while(l<r){
            m = (l+r)/2;
            if(m*m <=num){
                ans = max(ans,m);
                // find larger candidates
                l = m+1;
            }
            else{
                r = m;
            }

        }
        if(ans*ans == num)return true;
        else return false;
    }
};