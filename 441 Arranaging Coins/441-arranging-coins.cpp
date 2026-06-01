class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        long long int i=1;
        while(i<=n){
            n -= i ;
            ans++;
            i++;
        }
        return ans;
    }
};