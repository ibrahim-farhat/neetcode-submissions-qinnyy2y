class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /* basic thinking */
        // when finding character -> search for any duplicate in its directions
        // if duplicate found return false
        // in the end return true
        for (size_t x{0}; x < 9; x++) {
            for (size_t y{0}; y < 9; y++) {
                if (isdigit(board[x][y])) {
                    for (size_t i{0}; i < 9; i++) {
                        if (board[x][i] == board[x][y]) {
                            if (y == i) continue;
                            return false;
                        }
                        if (board[i][y] == board[x][y]) {
                            if (x == i) continue;
                            return false;
                        }
                    }

                    for (size_t i{(x / 3) * 3}; i < (((x / 3) * 3) + 3); i++) {
                        for (size_t j{(y / 3) * 3}; j < (((y / 3) * 3) + 3); j++) {
                            if (x == i && y == j) continue;
                            if (board[x][y] == board[i][j]) {
                                return false;
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};
