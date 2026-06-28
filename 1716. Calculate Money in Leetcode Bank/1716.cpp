class Solution {
public:
    int totalMoney(int n) {
        int s = 0 , h = 1;
        int ans = 0;
        for(int i=1;i<=n;++i){
            if(i%7 == 1){
                s++;
                h = s;
            }
            ans += h;
            h++;
        }
        return ans;
    }
};