class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0 , f = 5;
        while(f<=n){
            ans += n/f;
            f *= 5;
        }
        return ans;
    }
};