class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxLeft(height.size());
        vector<int> maxRight(height.size());
        vector<int> h(height.size());
        
        int temp = 0;
        for (size_t i {0}; i < height.size(); i++) {
            if (height.at(i) > temp) temp = height.at(i);
            maxLeft.at(i) = temp;
        }
        temp = height.at(height.size() - 1);
        for (int i {height.size() - 1}; i >= 0; i--) {
            if (height.at(i) > temp) temp = height.at(i);
            maxRight.at(i) = temp;
        }
        for (size_t i {0}; i < height.size(); i++) {
            h.at(i) = min(maxLeft.at(i), maxRight.at(i));
            cout << h.at(i) << "\t";
        }
        int result = 0;
        for (size_t i {0}; i < height.size(); i++) {
            if (height.at(i) >= h.at(i)) continue;
            result += h.at(i) - height.at(i);
        }
        return result;
    }
};
