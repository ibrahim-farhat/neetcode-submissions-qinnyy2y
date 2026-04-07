class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int m;
        vector<vector<int>> res;

        for (int x = 0; x < nums.size() - 2; x++) {
            for (int y = x + 1; y < nums.size() - 1; y++) {
                for (int z = y + 1; z < nums.size(); z++) {
                    l = nums[x];
                    m = nums[y];
                    r = nums[z];

                    if ((l + m + r) == 0) {
                        vector<int> vec(3);
                        vec.at(0) = l;
                        vec.at(1) = m;
                        vec.at(2) = r;

                        // for (int i = 0; i < 3; i++) {
                        //     int smallest = vec.at(i);
                        //     int index = i;
                        //     for (int j = i + 1; j < 3; j++) {
                        //         if (vec.at(j) < smallest) {
                        //             smallest = vec.at(j);
                        //             index = j;
                        //         }
                        //     }
                        //     if (index != i) {
                        //         int temp = vec.at(index);
                        //         vec.at(index) = vec.at(i);
                        //         vec.at(i) = temp;
                        //     }
                        // }
                        res.push_back(vec);
                    }
                }
            }
        }

        for (int i = 0; i < res.size(); i++) {
            for (int j = i + 1; j < res.size(); j++) {
                if (res[i].at(0) == res[j].at(0)
                    && res[i].at(1) == res[j].at(1)
                    && res[i].at(2) == res[j].at(2))
                {
                    res.erase(res.begin() + j);
                    j--;
                }
            }
        }
        
        return res;
    }
};
