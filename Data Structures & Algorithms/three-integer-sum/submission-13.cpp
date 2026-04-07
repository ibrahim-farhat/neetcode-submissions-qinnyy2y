class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        /* Bubble sort */
        for (size_t i {0}; i < nums.size(); i++) {
            for (size_t j {0}; j < (nums.size() - i - 1); j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = nums[j];
                }
            }
        }
        
        vector<vector<int>> result;
        
        int a = 0;

        while (a < (nums.size() - 2) && nums[a] <= 0) {
            int l = a + 1;
            int r = nums.size() - 1;
    
            while (l < r) {
                int sum = nums[a] + nums[l] + nums[r];

                if (sum == 0) {
                    result.push_back({nums[a], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                } else if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                }
            }
            
            a++;
            
            while (a < (nums.size() - 2) && nums[a] == nums[a - 1]) {
                a++;
            }
        }

        return result;
    }
};
