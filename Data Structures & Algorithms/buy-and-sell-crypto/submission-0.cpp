class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, maxProfit = 0;

        while (r < prices.size()) {
            int diff = prices[r] - prices[l];
            if (diff > maxProfit) {
                maxProfit = diff;
            }
            if (prices[r] < prices[l]) {
                l = r;
            }
            r++;
        }
        
        return maxProfit;
    }
};
