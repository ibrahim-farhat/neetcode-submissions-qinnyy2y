class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.size() == 1) return cost[0];
        if (cost.size() == 2) return min(cost[0], cost[1]);

        // Use a vector instead of unordered_map for simpler indexing
        vector<int> dp(cost.size() + 1); // Initialize with maximum cost

        dp[cost.size() - 1] = cost[cost.size() - 1];  // Base case: last step cost
        dp[cost.size()] = 0;                         // Base case: reaching the top has no cost

        // Iterate from the second-last step (index cost.size() - 2) backwards
        for (int i {cost.size() - 2}; i >= 0; i--) {
            dp[i] = min(dp[i + 1], dp[i + 2]) + cost[i]; // Minimum cost from next two steps
        }

        return min(dp[0], dp[1]); // Minimum cost to reach the first step (starting point)
    }
};
