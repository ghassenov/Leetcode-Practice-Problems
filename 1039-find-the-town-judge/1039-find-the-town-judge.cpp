class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // i can think of using a hashmap {label:n_ppl_trust_him}, if exists a label with n_trusts = n-1, then that's the label we need else -1.
        // but that doesn't work on example 3
        // what if we use a tuple (node,n_trusts) and store the nodes in an adjacency list, then the town judge won't have adjacent nodes and n_trust = n-1;
        vector<int> incoming(n+1,0);
        vector<int> outcoming(n+1,0);

        for(auto edge: trust){
            int u = edge[0];
            int v = edge[1];
            // u->v
            incoming[v]++;
            outcoming[u]++;
        }
        // find node with incoming = n-1;
        for(int i=1;i<=n;i++){
            if(incoming[i] == n-1){
                if(outcoming[i] == 0) return i;
                else return -1;
            }
        }
        return -1;
    }
};