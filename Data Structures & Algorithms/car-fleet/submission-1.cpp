class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<int> result(position.size());
        vector<int> sorted(0);
        
        for (int i = 0; i < position.size(); i++) {
            int biggest = 0;
            int bigIndex = 0;

            for (int j = 0; j < position.size(); j++) {
                
                int flag = 0;
                
                for (int z = 0; z < sorted.size(); z++) { 
                    if (sorted.at(z) == j) {
                        flag = 1;
                        break;
                    }
                }
                
                if (flag == 1) continue;
                
                if (position.at(j) >= biggest) {
                    biggest = position.at(j);
                    bigIndex = j;
                } 
            }
            
            sorted.push_back(bigIndex);
        }

        stack<float> fleets;
        
        for (int i = 0; i < sorted.size(); i++) {
            float time = (target - position.at(sorted.at(i))) / (float) speed.at(sorted.at(i));
            if (!fleets.empty()) {
                if (time > fleets.top()) {
                    fleets.push(time);
                } 
            } else {
                fleets.push(time);
            }
        }

        // for (int i = 0; i <= fleets.size(); i++) {
        //     cout << (fleets.top()) << "\t";
        //     fleets.pop();
        // }

        return fleets.size();
    }
};
