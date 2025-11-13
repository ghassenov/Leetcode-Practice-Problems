class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        int seq=0;
        for(auto x:nums){
            if(x == 1){
                seq++;
            }
            else{
                count = max(count,seq);
                seq=0;
            }
        }
        count = max(count,seq);
        return count;
    }
};