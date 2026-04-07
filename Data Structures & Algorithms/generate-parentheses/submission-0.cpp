class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string subset;
        backtrack(0, 0, n, res, subset);

        return res;
    }
private:
    void backtrack(int open, int closed, int n, vector<string> &res, string &subset) {
        string temp = subset;
        if (open == n && closed == n) {
            res.push_back(subset);
            return;
        }

        if (open < n) {
            subset += "(";
            backtrack(open + 1, closed, n, res, subset);
        }
        
        if (closed < open) {
            temp += ")";
            backtrack(open, closed + 1, n , res, temp);
        }
    }
};
