class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> t;
        int n = s.size() ;
        for(int i=n-1; i>=0;--i){
            t.push_back(s[i]);
        }
        s = t ;
    }
};