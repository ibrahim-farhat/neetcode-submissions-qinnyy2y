class Solution {
public:
    vector<int> countBits(int n) {
        
        /* O(n log n) */
        
        vector<int> res(n + 1);

        for (int i {0}; i < n + 1; i++) {
            int x = i;

            while (x) {
                x = x & (x - 1);
                res.at(i)++;
            }
        }

        return res;
    }
};
