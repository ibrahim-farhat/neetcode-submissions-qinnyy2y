class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<int> s;
        
        for (int i = 0; i < temperatures.size(); i++) {
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
