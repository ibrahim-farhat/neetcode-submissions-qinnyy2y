class Solution {
public:
    int climbStairs(int n) {

        if (n == 1) return 1;
        if (n == 2) return 2;

        vector<int> arr(n + 1, 0);
        arr.at(n) = 1;
        arr.at(n - 1) = 1;

        for (int i {n - 2}; i >= 0; i--) {
            arr.at(i) = arr.at(i + 1) + arr.at(i + 2);
        }

        return arr.at(0);
    }
        
};
