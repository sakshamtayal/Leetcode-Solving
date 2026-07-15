class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int o = 0 , e = 0;
        for(int i=1;i<=n;++i){
            o += 2*i - 1;
            e += 2*i ;
        }
        return gcd(o,e);
    }
};