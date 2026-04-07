class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();

        int t = 0, b = rows - 1;
        int m;
        while (t <= b) {
            m = (t + b) / 2;

            if (target > matrix[m][cols - 1]) t = m + 1;
            else if (target < matrix[m][0]) b = m - 1;
            else break;
        }

        if (!(t <= b)) return false;

        int l = 0, r = cols - 1;
        int mm;
        while (l <= r) {
            mm = (l + r) / 2;

            if (target == matrix[m][mm]) return true;
            else if(target > matrix[m][mm]) l = mm + 1;
            else r = mm - 1;
        }

        return false;
    }
};
