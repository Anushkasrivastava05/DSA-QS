class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n + 1);
        for (const auto& road : roads) {
            adj[road[0]].push_back({road[1], road[2]});
            adj[road[1]].push_back({road[0], road[2]});
        }

        queue<int> q;
        vector<bool> visited(n + 1, false);

        q.push(1);
        visited[1] = true;

        int min_score = 1e9;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (const auto& edge : adj[curr]) {
                int neighbor = edge.first;
                int dist = edge.second;

                min_score = min(min_score, dist);

                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return min_score;
    }
};