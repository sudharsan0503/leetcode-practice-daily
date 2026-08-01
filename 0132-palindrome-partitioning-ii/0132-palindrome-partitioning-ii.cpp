class Solution {
public:
    int minCut(string s) {
        int n = s.size();

        // pal[i][j] = true if s[i...j] is a palindrome
        vector<vector<bool>> pal(n, vector<bool>(n, false));

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j] && (j - i <= 2 || pal[i + 1][j - 1])) {
                    pal[i][j] = true;
                }
            }
        }

        // dp[i] = minimum palindrome partitions from i to n-1
        vector<int> dp(n + 1, 0);
        dp[n] = 0;

        for (int i = n - 1; i >= 0; i--) {
            int mini = INT_MAX;

            for (int j = i; j < n; j++) {
                if (pal[i][j]) {
                    int cost = 1 + dp[j + 1];
                    mini = min(mini, cost);
                }
            }

            dp[i] = mini;
        }

        return dp[0] - 1;
    }
};