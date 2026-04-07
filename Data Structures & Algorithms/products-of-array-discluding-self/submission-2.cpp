class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /* O(n) with using division operator */

        vector<int> res(nums.size(), 1);

        int x = 1;
        int y = 1;
        int zeros = 0;

        for (int i = 0; i < nums.size(); i++) {
            x *= nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeros++;
                continue;
            } 
            y *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == 0 && zeros == 1) {
                res.at(i) = y;
            } 
            else if(zeros > 1) {
                res.at(i) = 0;
            } else {
                res.at(i) = x / nums.at(i);
            } 
        }

        return res;
    }
};
