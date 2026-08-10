class Solution {
public:
    bool winnerSquareGame(int n) {
        // dp[i] stores whether the player whose turn it is can win with i stones remaining
        vector<bool> dp(n + 1, false);

        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k * k <= i; ++k) {
                // If taking k*k stones forces the opponent into a losing state (false)
                if (!dp[i - k * k]) {
                    dp[i] = true;
                    break; // Found a winning move, stop checking further square numbers
                }
            }
        }

        return dp[n];
    }
};