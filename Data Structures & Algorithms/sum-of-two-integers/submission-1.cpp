class Solution {
public:
    int getSum(int a, int b) {
        int x = 0;
        int y = 0;
        
        do {
            x = a ^ b;
            y = (a & b) << 1;
            a = x;
            b = y;
        } while (b);

        return a;
    }
};
