class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;

        dfs(0, res, subset, nums);

        return res;
    }
private:
    void dfs(int i, vector<vector<int>> &res, vector<int> &subset, vector<int> &nums) {
        if (i >= nums.size()) {
            res.push_back(subset);
            return;
        }

        /* decision of adding the number */
        subset.push_back(nums[i]);
        dfs(i + 1, res, subset, nums);

        /* decision of not adding the number */
        subset.pop_back();
        dfs(i + 1, res, subset, nums);

        return;
    }
};
