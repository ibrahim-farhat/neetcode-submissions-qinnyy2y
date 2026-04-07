class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result(2, 0);

        for (size_t i {0}; i < nums.size(); i++) {
            for (size_t j {i + 1}; j < nums.size(); j++) {
                if (target - nums[i] == nums[j]) {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }

        return result;
    }
};
