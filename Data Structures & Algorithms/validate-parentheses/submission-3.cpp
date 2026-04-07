class Solution {
public:
    bool isValid(string s) {
        char *brackets = NULL;
        size_t size = 0;

        size_t i = 0;

        while (s[i] != '\0') {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                brackets = (char *) realloc(brackets, sizeof(char) * ++size);
                brackets[size - 1] = s[i];
            } else if (s[i] == '}') {
                if (size > 0 && brackets[size - 1] == '{') {
                    brackets = (char *) realloc(brackets, sizeof(char) * --size);
                } else {
                    return false;
                }
            } else if (s[i] == ')') {
                if (size > 0 && brackets[size - 1] == '(') {
                    brackets = (char *) realloc(brackets, sizeof(char) * --size);
                } else {
                    return false;
                }
            } else if (s[i] == ']') {
                if (size > 0 && brackets[size - 1] == '[') {
                    brackets = (char *) realloc(brackets, sizeof(char) * --size);
                } else {
                    return false;
                }
            }

            i++;
        }

        if (size > 0) return false;

        return true;
    }
};
