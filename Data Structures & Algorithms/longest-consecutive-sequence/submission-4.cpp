class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;

        unordered_set<int> numSet(nums.begin(), nums.end());
        
        for (int num : nums) {
            // if the (num - 1) doesn't exist, the find() method will return iterator to the end of the set,
            // and it is an indicator that (num - 1) is a beginning of a consecutive sequence.
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 0;

                // if the (num + length) exists, the find() method will return iterator to the found element and it isn't equal to the end of the set.
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }

                longest = (longest > length)? longest : length;
            }
        }

        return longest;
    }
};
