class Solution {
public:
    int reverse(int x) {
        int y = 0;
        int temp = x;
        int i = 0;

        while (x != 0) {
            y = y * 10;
            y = y + (x % 10);
            x = x / 10;
            i++;
        }

        if (temp % 10 > 2 && i > 9) return 0;
        
        return y;
    }
};
