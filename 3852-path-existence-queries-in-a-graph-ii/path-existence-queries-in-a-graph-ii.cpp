class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        // 1. Pair values with their original indices and sort them
        vector<pair<int, int>> sorted_nums(n);
        for (int i = 0; i < n; ++i) {
            sorted_nums[i] = {nums[i], i};
        }
        sort(sorted_nums.begin(), sorted_nums.end());

        // 2. Map original index -> sorted position
        vector<int> pos(n);
        for (int i = 0; i < n; ++i) {
            pos[sorted_nums[i].second] = i;
        }

        // 3. Precompute the furthest right jump (2^0 step) using two pointers
        int LOG = 20; // 2^19 > 5 * 10^5, sufficient for standard constraints
        vector<vector<int>> up(LOG, vector<int>(n));

        int r = 0;
        for (int l = 0; l < n; ++l) {
            while (r < n && sorted_nums[r].first - sorted_nums[l].first <= maxDiff) {
                r++;
            }
            up[0][l] = r - 1; // The furthest valid index reachable from l
        }

        // 4. Build the binary lifting table
        for (int j = 1; j < LOG; ++j) {
            for (int i = 0; i < n; ++i) {
                up[j][i] = up[j - 1][up[j - 1][i]];
            }
        }

        // 5. Answer each query
        vector<int> ans;
        ans.reserve(queries.size());

        for (const auto& q : queries) {
            int u = q[0], v = q[1];
            int p1 = pos[u], p2 = pos[v];
            
            if (p1 == p2) {
                ans.push_back(0);
                continue;
            }

            int start = min(p1, p2);
            int target = max(p1, p2);

            // Check if target is reachable at all using maximum possible jumps
            int max_reachable = start;
            for (int j = LOG - 1; j >= 0; --j) {
                max_reachable = up[j][max_reachable];
            }
            if (max_reachable < target) {
                ans.push_back(-1);
                continue;
            }

            // Count the minimum steps needed to reach or pass the target
            int steps = 0;
            int curr = start;
            for (int j = LOG - 1; j >= 0; --j) {
                if (up[j][curr] < target) {
                    steps += (1 << j);
                    curr = up[j][curr];
                }
            }
            
            // One final step to cross or hit the target exactly
            ans.push_back(steps + 1);
        }

        return ans;
    }
};