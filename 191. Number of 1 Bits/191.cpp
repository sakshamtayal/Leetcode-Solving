class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> b(n);
        string s = b.to_string();
        int ans = 0;
        for(int i=0;i<s.length();++i){
            if(s[i] == '1'){
                ans++;
            }
        }
        return ans;
    }
};