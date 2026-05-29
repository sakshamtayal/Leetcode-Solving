class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long len = 0;
        for(char ch : s) {
            if(isdigit(ch)) {
                len *= (ch - '0');
            } else {
                len++;
            }
        }
        for(int i = s.size() - 1; i >= 0; i--) {
            char ch = s[i];
            k %= len;
            if(k == 0 && isalpha(ch)) {
                return string(1, ch);
            }
            if(isdigit(ch)) {
                len /= (ch - '0');
            } else {
                len--;
            }
        }
        return "";
    }
};