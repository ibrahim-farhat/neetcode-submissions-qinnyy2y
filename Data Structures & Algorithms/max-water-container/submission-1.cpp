class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0, r = 1;

        for (int l = 0; l < heights.size() - 1; l++) {
            r = 0;
            while (r < heights.size()) {
                int diff = heights[l] - heights[r];
                int abs = min(heights[r], heights[l]);
                if (abs * (r - l) > max) max = abs * (r - l);
                r++;
            }
        }


        return max;
    }
};
