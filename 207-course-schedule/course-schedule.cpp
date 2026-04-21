class Solution {
public:
    bool topologicalSort(unordered_map<int, vector<int>>& adj,
                         vector<int>& inDegree, int n) {

        queue<int> que;
        int count = 0;

        // push all nodes with indegree 0
        for (int i = 0; i < n; i++) {
            if (inDegree[i] == 0) {
                que.push(i);
            }
        }

        while (!que.empty()) {
            int u = que.front();
            que.pop();

            count++;

            for (auto v : adj[u]) {
                inDegree[v]--;

                if (inDegree[v] == 0) {
                    que.push(v);
                }
            }
        }

        return count == n;
    }

    bool Dfs(unordered_map<int, vector<int>>& adj, int u, vector<bool>& visited,
             vector<bool>& inRec) {
        visited[u] = true;
        inRec[u] = true;

        for (int v : adj[u]) {
            if (!visited[v] && Dfs(adj, v, visited, inRec)) {
                return true;
            } else if (inRec[v] == true)
                return true;
        }

        inRec[u] = false;

        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        unordered_map<int, vector<int>> adj;
        // vector<int> inDegree(numCourses, 0);

        for (auto& vec : prerequisites) {
            int a = vec[0];
            int b = vec[1];

            // b -> a
            adj[b].push_back(a);
            // inDegree[a]++;
        }

        // return topologicalSort(adj, inDegree, numCourses);
        vector<bool> visited(numCourses, false);
        vector<bool> inRec(numCourses, false);

        for (int i = 0; i < numCourses; i++) {
            if (!visited[i] && Dfs(adj, i, visited, inRec)) {
                return false;
            }
        }
        return true;
    }
};