class Solution {
public:
    int minOperations(int n) {
        if(n<2){
            return 0;
        }
        int ans = 0;
        for(int i=0;i<n;++i){
            int a = 2*i + 1;
            if(a<n){
                ans += n - a;
            }
            if(a>=n){
                break;
            }
        }
        return ans;
    }
};