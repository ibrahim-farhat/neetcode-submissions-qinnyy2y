class Solution {
public:
    int climbStairs(int n) {
        int one = 0;
        int two = 1;
        int result = 0;

        for (int i = 0; i < n; i++) {
            int temp = two;
            two = one + two;
            one = temp;
        }

        return two;
    }
        
};
