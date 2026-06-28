class Solution {
public:
    int fn(int x){
        int i = 0;
        while(x>1){
            if(x%2 == 0){
                x = x/2;
                i++;
            }else{
                x = 3*x + 1;
                i++;
            }
        }
        return i;
    }
    int getKth(int lo, int hi, int k) {
        vector<int> cn;
        for(int i=lo;i<=hi;++i){
            cn.push_back(fn(i));
        }
        vector<vector<int>> h;
        for(int i=0;i<cn.size();++i){
            h.push_back({cn[i],i+lo});
        }
        sort(h.begin(),h.end());
        return h[k-1][1];
    }
};