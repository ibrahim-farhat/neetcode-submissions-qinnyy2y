class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> pairs(n);
        
        for (int i = 0; i < n; i++) {
            pairs[i] = { position[i], speed[i] };
        }

        sort(pairs.begin(), pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return b.first < a.first;
        });

        stack<float> fleets;

        for (int i = 0; i < pairs.size(); i++) {
            float time = (target - pairs.at(i).first) / (float) pairs.at(i).second;
            if (!fleets.empty()) {
                if (time > fleets.top()) {
                    fleets.push(time);
                } 
            } else {
                fleets.push(time);
            }
        }

        return fleets.size();
    }
};
