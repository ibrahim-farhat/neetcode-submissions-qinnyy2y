class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /* more fast with more memory complexity */
        unordered_map<int, vector<char>> rows;
        unordered_map<int, vector<char>> cols;
        unordered_map<int, vector<char>> squares;

        for (size_t i{0}; i < 9; i++) {
            for (size_t j{0}; j < 9; j++) {
                char cell = board[i][j];
                if (cell == '.') continue;
                for (int x = 0; x < rows[i].size(); x++) {
                    if (cell == rows[i][x]) return false;
                }
                for (int y = 0; y < cols[j].size(); y++) {
                    if (cell == cols[j][y]) return false;
                }
                for (int z = 0; z < squares[(i / 3) * 3 + j / 3].size(); z++) {
                    if (cell == squares[(i / 3) * 3 + j / 3][z]) return false;
                }
                rows[i].push_back(cell);
                cols[j].push_back(cell);
                squares[(i / 3) * 3 + j / 3].push_back(cell);
            }
        }

        return true;
    }
};
