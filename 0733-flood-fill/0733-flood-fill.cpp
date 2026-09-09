class Solution {
private:
void dfs(int row , int col ,int initcolor, int newcolor, vector<vector<int>>&image){
    int n = image.size();
    int m = image[0].size();
    image[row][col] = newcolor;
    int delrow[] = {-1,0,+1,0};
    int delcol[] = {0,+1,0,-1};
    for(int i=0;i<4;i++){
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];
        if(nrow >= 0 && nrow < n && ncol >=0 && ncol <m && image[nrow][ncol] == initcolor){
            dfs(nrow, ncol ,initcolor, newcolor , image);
        }
    }
}
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initcolor = image[sr][sc];
        if(initcolor == color) return image;
        dfs(sr, sc, initcolor , color, image);
        return image;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna