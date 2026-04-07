class Solution {
public:
    int reverse(int x) {
        int y = 0;
        int temp = x;
        int i = 0;

        while (temp != 0) {
            y = y * 10;
            y = y + (temp % 10);
            temp = temp / 10;
            i++;
        }

        if (x % 10 > 2 && i == 10) return 0;
        
        return y;
    }
};
