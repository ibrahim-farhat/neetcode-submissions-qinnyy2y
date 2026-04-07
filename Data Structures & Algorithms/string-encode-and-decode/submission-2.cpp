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
            string temp;
            j = 0;
            while (s[i] != '#') {
                j *= 10;
                j += s[i] - '0';
                i++;
            }
            for (size_t z = 0; z < j; z++) {
                i++;
                temp = temp + s[i];
            }
            i++;
            dec.push_back(temp);
        }

        return dec;

    }
};
