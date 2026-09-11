class Solution {
private: 
 void bfs(int row, int col , vector<vector<int>>&visited, vector<vector<char>>&board){
    int n = board.size();
    int m = board[0].size();
    visited[row][col] = 1;
    queue<pair<int,int>>q;
    q.push({row,col});
    while(!q.empty()){
        row = q.front().first;
        col = q.front().second;
        q.pop();
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        for(int i=0 ; i < 4 ; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if( nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && board[nrow][ncol] == 'O' && !visited[nrow][ncol]){
                visited[nrow][ncol] = 1;
                q.push({nrow,ncol});
            }
        }
    }
 }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int row =0; row<n ; row++){
            for(int col =0; col<m ; col++){
                if(row == 0 || row == n-1 || col == 0 || col == m-1){
                    if(board[row][col]=='O' && !visited[row][col]){
                        bfs(row, col , visited , board);
                    }
                }
            }
        }
        for(int row = 0; row<n ; row++){
            for(int col =0 ; col<m ; col ++){
                if(!visited[row][col] && board[row][col] == 'O'){
                    board[row][col] = 'X';
                }
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna