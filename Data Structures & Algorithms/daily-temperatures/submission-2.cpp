class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<int> s;
        
        s.push(0);

        for (int i = 1; i < temperatures.size(); i++) {
            while (!s.empty()) {
                if (temperatures[i] > temperatures[s.top()]) {
                    result[s.top()] = i - s.top();
                    s.pop();
                } else {
                    break;
                }
            }

            s.push(i);
        }

        return result;
    }
};
