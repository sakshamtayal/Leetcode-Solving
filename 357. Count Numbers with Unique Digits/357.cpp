class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0){
            return 1;
        }
        vector<int> h(n,0);
        int m = 9;
        h[0] = 9;
        for(int i=1;i<h.size();++i){
            h[i] = h[i-1]*m;
            m--;
            if(m==0){
                break;
            }
        }
        h[0] = 10;
        int ans = 0;
        for(int i=0;i<h.size();++i){
            if(h[i] == 0){
                break;
            }
            ans += h[i];
        }
        return ans;
    }
};