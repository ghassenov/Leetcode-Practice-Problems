class Solution {
public:
    bool canMakeBouquets(vector<int> &bloomDay,int m,int k,int mid){
        int total = 0;
        for(int i=0;i<bloomDay.size();i++){
            int count = 0;
            while(i < bloomDay.size() && count < k && bloomDay[i] <= mid){
                count++;
                i++;
            }
            if(count == k){
                total++;
                i--;
            }
            if(total >= m) return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k > n) return -1;
        int ans;

        int l = 1;
        int r = INT_MAX;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(canMakeBouquets(bloomDay,m,k,mid)){
                ans = mid;
                r = mid-1;

            }
            else l = mid+1;
        }
        return ans;
    }
};