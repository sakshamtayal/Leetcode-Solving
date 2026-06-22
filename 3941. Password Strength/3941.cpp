class Solution {
public:
    int is(char x){
        if(x - '0' >=0 && x-'0' <10){
            return 3;
        }
        if(x - 'a' >=0 && x-'a' < 26){
            return 1;
        }
        if(x -'A' >=0 && x-'A' < 26){
            return 2;
        }
        return 5;
    }
    int passwordStrength(string t) {
        sort(t.begin(),t.end());
        string s = "";
        s += t[0];
        for(int i=1;i<t.length();++i){
            if(t[i] != s[s.length()-1]){
                s += t[i];
            }
        }
        long long int ans = 0;
        for(int i=0;i<s.length();++i){
            ans += is(s[i]);
        }
        return ans;
    }
};