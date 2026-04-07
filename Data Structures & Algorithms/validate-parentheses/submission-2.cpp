class Solution {
public:
    bool isValid(string s) {
        
        vector<char> brackets(0);

        for (char c : s) {
            switch (c) {
                case '{' :
                case '(' :
                case '[' :
                    brackets.push_back(c);
                    break;

                case '}':
                    if (!brackets.empty() && brackets.back() == '{') {
                        brackets.pop_back();
                    } else {
                        return false;
                    }
                    break;

                case ')':
                    if (!brackets.empty() && brackets.back() == '(') {
                        brackets.pop_back();
                    } else {
                        return false;
                    }
                    break;

                case ']':
                    if (!brackets.empty() && brackets.back() == '[') {
                        brackets.pop_back();
                    } else {
                        return false;
                    }
                    break;
            }
        }

        return brackets.empty();
    }
};
