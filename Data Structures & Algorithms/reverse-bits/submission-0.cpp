#define SET_BIT(x,y)  x = x | (1 << y)
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x = 0;
        int i = 31;
        while (n) {
            if (n & 1 == 1) x = x | (1 << i);
            n = n >> 1;
            i--;
        }

        return x;
    }
};
