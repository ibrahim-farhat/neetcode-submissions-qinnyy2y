class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);

        /* count number of repeatition for each element */ 
        for (int n : nums) {
            count[n] = 1 + count[n];
        }

        /* sort the elements according to the repition of each element in a vector of vectors */
        for (auto n : count) {
            freq[n.second].push_back(n.first);
        }
        

        /* extract the most k frequently elements */
        vector<int> res(k);
        int j = 0;
        for (int i {nums.size()}; i >= 0; i--) {
            for (int n : freq[i]) {
                res.at(j) = n;
                j++;
                if (j == k) return res;
            }
        }


        return res;
    }
};
