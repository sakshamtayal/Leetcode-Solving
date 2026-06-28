class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> ans;
        for(int i=l;i<=r;++i){
            int b = i;
            while(b>0){
                int c = b%10;
                if(c == 0){
                    break;
                }
                if(i%c > 0){
                    break;
                }
                if(b/10 == 0){
                    ans.push_back(i);
                }
                b /= 10;
            }
        }
        return ans;
    }
};