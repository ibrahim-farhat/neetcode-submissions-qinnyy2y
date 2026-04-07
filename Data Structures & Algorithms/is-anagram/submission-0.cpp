class Solution {
public:
    bool isAnagram(string s, string t) {
        char arr1[26] {0};
        char arr2[26] {0};

        for (size_t i {0}; i < s.size(); i++) {
            arr1[s[i] - 'a']++;
        }
        
        for (size_t i {0}; i < t.size(); i++) {
            arr2[t[i] - 'a']++;    
        }

        for (size_t i {0}; i < 26; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }

        return true;
    }
};
