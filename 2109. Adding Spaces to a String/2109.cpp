class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result = "";
        result.reserve(s.length() + spaces.size());         
        int spaceIdx = 0;
        int m = spaces.size();        
        for (int i = 0; i < s.length(); ++i) {
            if (spaceIdx < m && i == spaces[spaceIdx]) {
                result += ' ';
                spaceIdx++;
            }
            result += s[i];
        }        
        return result;
    }
};