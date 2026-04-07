class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.size() == 1) return cost[0];
        if (cost.size() == 2) return min(cost[0], cost[1]);
        int first = 0;
        int second = cost[cost.size() - 1];
        int m = 0;

        for (int i {cost.size() - 2}; i >= 0; i--) {
            m = min(second, first) + cost[i];
            first = second;
            second = m;
        }

        return min(first, second);
    }
};
