class Solution {
public:
    int climbStairs(int n) {
        int first = 1;
        int second = 2;

        if (n == first) return first;
        else if (n == second) return second;

        int result = 0;

        for (size_t i {2}; i < n; i++) {
            result = first + second;
            first = second;
            second = result;
        }

        return result;
    }
        
};
