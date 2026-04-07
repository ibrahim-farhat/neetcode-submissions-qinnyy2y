class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int result = 0;


            while (height[r - 1] > height[r] && r > 0) r--;
        while (l < r) {
            while (height[l + 1] > height[l] && l < r) l++;
            int rr = l + 1;
            while (height[rr] < height[l] && rr < r) rr++;
            int area = 0;
            int h = max(height[rr], height[l]) - (max(height[rr], height[l]) - min(height[rr], height[l]));
            cout << h;
            for (int i = l + 1; i < rr; i++) {
                if (height[i] > h) continue;
                area += (h - height[i]);
                // cout << area << "\t";
            }
            // int areaa = (max(height[rr], height[l]) - (max(height[rr], height[l]) - min(height[rr], height[l]))) * (rr - l - 1);
            result += area;
            l = rr;
        }

        return result;
    }
};
