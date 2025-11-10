class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int base = -1;
        int n = arr.size();
        for(int i=n-1;i>=0;i--){
            int mx;
            if(arr[i]>=base){
                mx = base;
                base = arr[i];
                arr[i] =mx; 
            }
            else{
                arr[i] = base;
            }
        }
        return arr;
    }
};