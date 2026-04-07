class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> res(k);

        for (int n : nums) {
            count[n] = 1 + count[n];
        }
        for (size_t i {0}; i < k; i++) {
            int max = 0;
            int index = 0;
            for (auto &n : count) {
                if (n.second > max) index = n.first, max = n.second;
            }
            res[i] = index;
            count[index] = 0;
        }

        return res;
    }
};
