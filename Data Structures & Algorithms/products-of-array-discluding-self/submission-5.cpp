class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /* O(n) without using division operator */
        /* O(n) for memory complexity */
        vector<int> output(nums.size());
        
        output.at(0) = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            output.at(i + 1) = output.at(i) * nums.at(i);
        }

        int postfix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output.at(i) = postfix * output.at(i);
            postfix *= nums.at(i);
        }

        return output;
    }
};
