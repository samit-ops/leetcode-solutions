class Solution {
private:
    bool dfs(int node, int col, vector<vector<int>>& graph,
             vector<int>& colour) {

        colour[node] = col;

        for (auto it : graph[node]) {

            if (colour[it] == -1) {

                if (dfs(it, !col, graph, colour) == false)
                    return false;

            }
            else if (colour[it] == col) {
                return false;
            }
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();

        vector<int> colour(n, -1);

        for (int i = 0; i < n; i++) {

            if (colour[i] == -1) {

                if (dfs(i, 0, graph, colour) == false)
                    return false;
            }
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna