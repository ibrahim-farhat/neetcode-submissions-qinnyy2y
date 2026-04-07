class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x = 0;
        int m;
        int y = matrix.size() - 1;
        while (x <= y) {
            m = (x + y) / 2;
            if (matrix[m][0] <= target && matrix[m][matrix[m].size() - 1] >= target) {
                break;
            } else if (matrix[m][0] < target) {
                x = m + 1;
            } else if (matrix[m][0] > target) {
                y = m - 1;
            }
        }
        
        x = 0;
        y = matrix[m].size() - 1;
        int mm;
        while (x <= y) {
            mm = (x + y) / 2;

            if (matrix[m][mm] == target) {
                return true;
            } else if (matrix[m][mm] < target) {
                x = mm + 1;
            } else if (matrix[m][mm] > target) {
                y = mm - 1;
            }
        }

        return false;
    }
};
