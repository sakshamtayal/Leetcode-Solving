class Solution {
public:
    int numSub(string s) {
        //we can use stack for this one if != 1 push that to vector or simply use for loop
        vector<string> o;
        string t = "";
        for(int i=0;i<s.length();++i){
            if(s[i] - '0' == 1){
                t += s[i];
            }else{
                if(t.length()>0){
                    o.push_back(t);
                    t = "";
                }
            }
        }
        if(t.length()>0){
            o.push_back(t);
        }
        long long ans = 0;
        long long d = 1e9 + 7;
        for(int i=0;i<o.size();++i){
            long long int n = o[i].length();
            long long int m ;
            if(n%2 == 0){
                 m = n+1;
                n /= 2;
            }else{
                 m = (n+1)/2;
            }
            ans = (ans + n*m)%d ;
        }
        return ans;
    }
};