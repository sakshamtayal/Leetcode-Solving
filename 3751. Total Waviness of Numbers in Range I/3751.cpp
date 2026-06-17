class Solution {
public:
    int totalWaviness(int n1, int n2) {
        if(n2 < 100){
            return 0;
        }
        int ans = 0;
        for(int i=n1;i<=n2;++i){
            if(i<100){
                continue;
            }
            string s = to_string(i);
            for(int j=1;j<s.length()-1;++j){
                if(s[j] > s[j-1] && s[j] > s[j+1]){
                    ans++;
                }
                if(s[j] < s[j+1] && s[j] < s[j-1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};