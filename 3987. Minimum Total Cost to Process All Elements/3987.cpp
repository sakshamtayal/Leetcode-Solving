class Solution {
public:
    int minimumCost(vector<int>& n, int k) {
        long long ans = 0 , c = 1 , r = k , MOD = 1e9 + 7;
        for(int i=0;i<n.size();++i){
            if(r<n[i]){
                long long h = n[i] - r;
                if(h%k == 0){
                    r += h;
                    long long f = c + h/k - 1;
                    long long f1 = (f % 2 == 0) ? (f / 2) % MOD : f % MOD;
                    long long f2 = (f % 2 == 0) ? (f+1) % MOD : ((f+1)/2) % MOD;
                    long long tf = (f1*f2) % MOD;
                    long long pc = c-1;
                    long long c1 = (pc%2 == 0) ? (pc/2) % MOD : pc%MOD;
                    long long c2 = (pc%2 == 0) ? (pc+1) % MOD : ((pc+1)/2) % MOD;
                    long long tc = (c1*c2) % MOD;
                    ans = (ans+(tf-tc + MOD)) % MOD;
                    c = f+1;
                }else{
                    r += k*((h/k)+1);
                    long long f = c + h/k;
                    long long f1 = (f % 2 == 0) ? (f / 2) % MOD : f % MOD;
                    long long f2 = (f % 2 == 0) ? (f+1) % MOD : ((f+1)/2) % MOD;
                    long long tf = (f1*f2) % MOD;
                    long long pc = c-1;
                    long long c1 = (pc%2 == 0) ? (pc/2) % MOD : pc%MOD;
                    long long c2 = (pc%2 == 0) ? (pc+1) % MOD : ((pc+1)/2) % MOD;
                    long long tc = (c1*c2) % MOD;
                    ans = (ans+(tf-tc + MOD)) % MOD;
                    c = f+1;
                }
            }
            r -= n[i];
        }
        return ans;
    }
};