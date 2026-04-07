class Solution {
public:
    bool isPalindrome(string s) {
        int a = 0;
        int b = s.size() - 1;

        while (a < b) {
            while ((isalnum(s[a]) == 0) && (a < b)) {
                a++;
            }
            while ((isalnum(s[b]) == 0) && (a < b)) {
                b--;
            }
            
            if (tolower(s[a]) != tolower(s[b])) {
                return false;
            }

            a++;
            b--;
        }

        return true;


    }
};
