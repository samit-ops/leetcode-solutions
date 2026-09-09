class Solution {
private:
    int bfs(queue<pair<int, int>>& q, vector<vector<int>>& grid, int& fresh) {
        int n = grid.size();
        int m = grid[0].size();

        int time = 0;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        while (!q.empty()) {

            int size = q.size();

            for (int i = 0; i < size; i++) {

                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                for (int j = 0; j < 4; j++) {

                    int nrow = row + delrow[j];
                    int ncol = col + delcol[j];

                    if (nrow >= 0 && nrow < n &&
                        ncol >= 0 && ncol < m &&
                        grid[nrow][ncol] == 1) {

                        grid[nrow][ncol] = 2;
                        fresh--;

                        q.push({nrow, ncol});
                    }
                }
            }

            if (!q.empty()) {
                time++;
            }
        }

        return time;
    }

public:
    int orangesRotting(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;

        int fresh = 0;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {

                if (grid[row][col] == 2) {
                    q.push({row, col});
                }

                if (grid[row][col] == 1) {
                    fresh++;
                }
            }
        }

        int time = bfs(q, grid, fresh);

        if (fresh > 0) {
            return -1;
        }

        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna