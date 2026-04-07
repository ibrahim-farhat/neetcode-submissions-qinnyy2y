class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 0;
        long long total = 0;

        do {
            min++;
            total = 0;
            for (int i = 0; i < piles.size(); i++) {
                total += piles[i] / min;
                if (piles[i] % min > 0) total++;
            }
        } while (total > h);

        return min;
    }
};
