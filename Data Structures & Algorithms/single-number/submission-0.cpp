class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;

        for (size_t i {0}; i < nums.size(); i++) {
            x = x ^ nums.at(i);
        }

        return x;
    }
};
