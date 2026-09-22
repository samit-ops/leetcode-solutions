class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto p: prerequisites){
            int course = p[0];
            int prerequisite = p[1];
            adj[prerequisite].push_back(course);
        }
        vector<int>indegree(numCourses,0);
        for(int u=0;u<numCourses;u++){
            for(int v : adj[u]){
                indegree[v]++;
            }
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int count =0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;

            for(int neighbour : adj[node]){
                indegree[neighbour]--;
                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
        return count == numCourses;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna