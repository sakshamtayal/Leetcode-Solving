class Solution {
public:
    int minimumRefill(vector<int>& p, int c1, int c2) {
        int a = c1 , b = c2 , ans = 0;
        for(int l=0,r=p.size()-1;l<=r;++l,--r){
            if(l == r){
                if(a>= p[l] || b >= p[l]){
                    break;
                }
                if(a < p[l] && b < p[l]){
                    ans++;
                    break;
                }
            }
            if(a>=p[l]){
                a -= p[l];
            }else{
                ans++;
                a = c1 - p[l];
            }

            if(b>=p[r]){
                b -= p[r];
            } else {
                ans++;
                b = c2 - p[r];
            }
        }
        return ans;
    }
};