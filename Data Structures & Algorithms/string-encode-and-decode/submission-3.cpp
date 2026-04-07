class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;

        for (string str : strs) {
            enc.append(to_string(str.size()));
            enc.append("#");
            enc.append(str);
        }
        
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;

        int i = 0;
        int j;

        while (i < s.length()) {
            j = i;
            
            while (s[j] != '#') {
                j++;
            }

            int subLen = stoi(s.substr(i, j - i));

            string temp = s.substr(j + 1, subLen);

            dec.push_back(temp);

            i = j + subLen + 1;
        }

        return dec;

    }
};
