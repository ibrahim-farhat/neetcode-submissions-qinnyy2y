class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        vector<int> res(2);

        while (r > l) {
            int sum = numbers.at(l) + numbers.at(r);
            if (sum == target) {
                res.at(0) = l + 1;
                res.at(1) = r + 1;
                return res;
            } else if (sum > target) {
                r--;
            } else if (sum < target) {
                l++;
            }
        }

        return res;
    }
};
