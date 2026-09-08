class Solution {
private: 
    void bfs(int row,int col , vector<vector<int>>&visited, vector<vector<char>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        visited[row][col] = 1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int delrow = -1; delrow <= 1; delrow++){
                for(int delcol = -1; delcol <= 1; delcol++){
                    if(delrow != 0 && delcol !=0)continue;
                    if(delrow == 0 && delcol == 0)continue;
                    int newrow = row + delrow;
                    int newcol = col + delcol;
                    if(newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && !visited[newrow][newcol] && grid[newrow][newcol] == '1'){
                        visited[newrow][newcol] = 1;
                        q.push({newrow, newcol});
                    }
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int n = grid.size();
        int m = grid[0].size();
        int count =0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int row =0;row <n; row++){
            for(int col =0; col<m ; col++){
                if(!visited[row][col] && grid[row][col] == '1'){
                    count++;
                    bfs(row , col ,visited , grid);
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna