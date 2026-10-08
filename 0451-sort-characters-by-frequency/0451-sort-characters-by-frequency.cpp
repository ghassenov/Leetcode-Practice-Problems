class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> freq;

        for(char ch: s){
            freq[ch]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto &[ch,fq]: freq){
            pq.push({fq,ch});
        }

        string result = "";
        while(!pq.empty()){
            auto [count,ch] = pq.top();
            pq.pop();
            result.append(count,ch);
        }
        return result;
    }
};