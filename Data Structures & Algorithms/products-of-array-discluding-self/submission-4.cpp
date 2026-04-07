class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /* O(n) without using division operator */
        /* O(3n) for memory complexity */
        vector<int> postfix(nums.size());
        vector<int> prefix(nums.size());
        vector<int> output(nums.size());
        
        prefix.at(0) = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix.at(i) = prefix.at(i - 1) * nums[i]; 
        }

        postfix.at(nums.size() - 1) = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--) {
            postfix.at(i) = postfix.at(i + 1) * nums[i]; 
        }
        
        output.at(0) = postfix.at(1);
        output.at(nums.size() - 1) = prefix.at(nums.size() - 2);

        for (int i = 1; i < nums.size() - 1; i++) {
            output.at(i) = prefix.at(i - 1) * postfix.at(i + 1);
        }

        return output;
    }
};
