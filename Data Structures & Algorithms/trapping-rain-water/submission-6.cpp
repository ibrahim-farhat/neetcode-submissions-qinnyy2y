class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int maxLeft = height.at(l);
        int maxRight = height.at(r);
        int result = 0;

        while (l < r) {

            if (maxLeft <= maxRight) {
                l++;
                maxLeft = max(maxLeft, height.at(l));
                result += maxLeft - height.at(l);
            } else {
                r--;
                maxRight = max(maxRight, height.at(r));
                result += maxRight - height.at(r);
            }
        }
        return result;
    }
};
