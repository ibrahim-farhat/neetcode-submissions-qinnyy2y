class Solution {
public:
    vector<int> countBits(int n) {

        /* O(n) */

        vector<int> res(n + 1);

        res.at(0) = 0;

        int offset = 1;

        for (int i {1}; i < n + 1; i++) {
            if (offset * 2 == i) offset *= 2;
            res.at(i) = 1 + res.at(i - offset);
        }

        return res;
    }
};
