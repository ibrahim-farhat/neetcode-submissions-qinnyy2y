class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);

        int l, r;

        for (size_t i{0}; i < temperatures.size(); i++) {
            l = i;
            r = i + 1;
            while (r < temperatures.size()) {
                if (temperatures[r] > temperatures[l]) {
                    result[i] = r - l;
                    break;
                }
                r++;
            }
        }

        return result;
    }
};
