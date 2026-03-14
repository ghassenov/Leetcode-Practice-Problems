class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> res(spells.size());

        for (int i = 0; i < spells.size(); i++) {
            int l = 0, r = potions.size() - 1, idx = potions.size();

            while (l <= r) {
                int m = (l + r) / 2;
                if ((long long) spells[i] * potions[m] >= success) {
                    r = m - 1;
                    idx = m;
                } else {
                    l = m + 1;
                }
            }

            res[i] = potions.size() - idx;
        }

        return res;
    }
};