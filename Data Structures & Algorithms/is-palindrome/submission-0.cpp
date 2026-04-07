class Solution {
public:
    bool isPalindrome(string s) {
        // reverse the string, and put it in a vector and check
        vector<char> pure;

        for (size_t i {0}; i < s.size(); i++) {
            if (isalnum(s[i]) != 0) {
                pure.push_back(tolower(s[i]));
            }
        }

        for (size_t i{0}; i < pure.size() / 2; i++) {
            if (pure.at(i) != pure.at(pure.size() - i - 1)) {
                return false;
            }
        }

        return true;
    }
};
