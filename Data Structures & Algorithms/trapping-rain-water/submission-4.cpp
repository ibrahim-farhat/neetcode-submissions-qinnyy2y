class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, end = height.size() - 1;
        int result = 0;

        while (height[end - 1] > height[end] && end > 0) end--;

        while (l < end) {
            while (height[l + 1] > height[l] && l < end) l++;

            int r = l + 1;
            while (height[r] < height[l] && r < end) r++;
            
            int area = 0;
            int h = min(height[r], height[l]);
            for (int i = l + 1; i < r; i++) {
                if (height[i] >= h) continue;
                area += (h - height[i]);
            }
            
            result += area;
            
            l = r;
        }

        return result;
    }
};
