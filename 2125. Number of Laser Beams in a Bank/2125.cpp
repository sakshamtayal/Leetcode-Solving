class Solution {
public:
    int numberOfBeams(vector<string>& b) {
        vector<int> cn;
        for(int i=0;i<b.size();++i){
            int p = 0;
            for(int j=0;j<b[i].length();++j){
                if(b[i][j] == '1'){
                    p++;
                }
            }
            if(p>0){
                cn.push_back(p);
            }
        }
        int ans = 0;
        if(cn.size()==0){
            return 0;
        }
        for(int i=0;i<cn.size()-1;++i){
            ans += cn[i]*cn[i+1];
        }
        return ans;
    }
};