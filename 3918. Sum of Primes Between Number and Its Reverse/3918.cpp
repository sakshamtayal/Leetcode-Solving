class Solution {
public:
    int sumOfPrimesInRange(int n) {
        if(n == 0){
            return 0;
        }
        string s = to_string(n);
        string t ="";
        for(int i= s.length()-1;i>=0;--i){
            t += s[i];
        }
        int m = stoi(t);
        vector<bool> isPrime(max(n,m)+1,true);
        for(int i=2;i<isPrime.size();++i){
            if(isPrime[i]){
                for(int j = 2*i;j<isPrime.size();j += i){
                    isPrime[j] = false;
                }
            }
        }
        isPrime[1] = false;
        int ans = 0;
        for(int i = min(n,m);i <= max(n,m);++i){
            if(isPrime[i]){
                ans += i;
            }
        }
        return ans;
    }
};