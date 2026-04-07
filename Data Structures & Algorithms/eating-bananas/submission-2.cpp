class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 0;
        int min = 0;

        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > r) r = piles[i];
        }

        while (l <= r) {
            int m = (l + r) / 2;
            long long total = 0;

            for (int i = 0; i < piles.size(); i++) {
                total += (piles[i] + m - 1) / m;
            }

            if (total <= h) {
                min = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        return min;
    }
};
