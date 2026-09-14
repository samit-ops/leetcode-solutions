class Solution {
private:
    void bfs(queue<pair<int,int>>&q, vector<vector<int>>&distance, vector<vector<int>>&mat){
        int n = mat.size();
        int m = mat[0].size();
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow >= 0 && nrow <n && ncol >= 0 && ncol <m && distance[nrow][ncol] == -1){
                    distance[nrow][ncol] = distance[row][col] + 1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>distance(n,vector<int>(m,-1));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(mat[row][col] == 0){
                    distance[row][col] = 0;
                    q.push({row,col});
                }
            }
        }
        bfs(q,distance,mat);
        return distance;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna