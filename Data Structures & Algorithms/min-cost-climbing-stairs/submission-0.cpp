class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (cost.size() == 1) return 0;
        if (cost.size() == 2) return min(cost[0], cost[1]);

        /* make a vector with the number of solutions with the cost for every solution */
        unordered_map<int, vector<int>> sol;
        sol[cost.size()].push_back(0);
        sol[cost.size() - 1].push_back(cost[cost.size() - 1]);
        
        for (int i = cost.size() - 2; i >= 0; i--) {
            for (int j = 0; j < sol[i + 1].size(); j++) {
                sol[i].push_back(sol[i + 1].at(j) + cost[i]);
            }
            for (int j = 0; j < sol[i + 2].size(); j++) {
                sol[i].push_back(sol[i + 2].at(j) + cost[i]);
            }
        }
        /* give out the minimum cost */
        int min = sol[0].at(0);
        for (int i = 0; i < sol[0].size(); i++) {
            if (min > sol[0].at(i)) min = sol[0].at(i);
        }
        for (int i = 0; i < sol[1].size(); i++) {
            if (min > sol[1].at(i)) min = sol[1].at(i);
        }

        return min;
    }
};
