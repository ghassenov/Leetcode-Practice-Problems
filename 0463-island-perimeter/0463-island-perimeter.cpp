class Solution {
private:
    int dfs(int i,int j, vector<vector<int>> &vis,vector<vector<int>> &grid,int &rows,int &cols){
        if(i < 0 || j <0 || i>= rows || j>= cols || grid[i][j] == 0){
            return 1;
            
        }
        if(vis[i][j] == 1) return 0;

        vis[i][j] = 1;
        return dfs(i-1,j,vis,grid,rows,cols) + dfs(i,j+1,vis,grid,rows,cols) + dfs(i+1,j,vis,grid,rows,cols) + dfs(i,j-1,vis,grid,rows,cols);
        
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vis[i][j] = -1;
            }
        }
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] == -1 && grid[i][j] == 1){
                    ans+= dfs(i,j,vis,grid,n,m);
                }
            }
        }
        return ans;
        
    }
};