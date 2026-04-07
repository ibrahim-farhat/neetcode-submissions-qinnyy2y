class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (!nums.size()) return 0;
        sort(nums.begin(), nums.end());
        
        int max = 1;
        int maxx = 1;

        for (size_t i {1}; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] == 1) {
                maxx++;
            } else if (nums[i] - nums[i - 1] == 0) {
                 
            } else {
                maxx = 1;
            } 
            if (maxx > max) {
                max = maxx;
            }
        }

        return max;
    }
};
