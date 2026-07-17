class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n,0);
        int x = n-1;
        int h = 1;
        for(int i=0;i<n/2;++i){
            ans[i] = (-1)*h;
            ans[x-i] = h;
            h++;
        }
        return ans;
    }
};