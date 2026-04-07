class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            int m = l + ((r - l) / 2);

            if (nums.at(m) == target) {
                return m;
            } else if (target > nums.at(m)) {
                l = m + 1;
            } else if (target < nums.at(m)) {
                r = m - 1;
            }
        }

        return -1;
    }
};
