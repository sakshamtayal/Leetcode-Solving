class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        int k = n/m ;
        for(int i=0;i<m;++i){
            string s = "";
            for(int j=0;j<n;++j){
                if(i == m-1 && j >= i*k && j<n){
                    s += ".";
                    continue;
                }
                if(i<m-1 && j >= i*k && j<=(i+1)*k){
                    s += ".";
                }else{
                    s += "#";
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};