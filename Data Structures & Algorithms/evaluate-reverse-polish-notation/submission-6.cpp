class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;

        for (string str : tokens) {
            if (str == "+") {
                    int x = s.top(); s.pop();
                    int y = s.top(); s.pop();
                    int z = x + y;   s.push(z);
                
            } else if (str == "-") {
                    int x = s.top(); s.pop();
                    int y = s.top(); s.pop();
                    int z = y - x;   s.push(z);
            } else if (str == "*") {
                    int x = s.top(); s.pop();
                    int y = s.top(); s.pop();
                    int z = x * y;   s.push(z);
            } else if (str == "/") {
                    int x = s.top(); s.pop();
                    int y = s.top(); s.pop();
                    int z = y / x;   s.push(z);
            } else {
                s.push(stoi(str));
            }
        }

        return s.top();
    }
};
