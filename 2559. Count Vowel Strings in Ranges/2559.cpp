class Solution {
public:
    bool is(char b){
         if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){
                return true;                
            }
            return false;
    }
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        vector<int> cn;
        for(int i=0;i<w.size();++i){
           if(is(w[i][0]) == true && is(w[i][w[i].length()-1]) == true){
            cn.push_back(1);
           }else{
            cn.push_back(0);
           }          
        }
        for(int i=1;i<cn.size();++i){
            cn[i] += cn[i-1];
        }
        vector<int> ans;
        for(int i=0;i<q.size();++i){
            int a;
           if(q[i][0] == 0){
            a = cn[q[i][1]];
           }else{
            a = cn[q[i][1]] - cn[q[i][0]-1];
           }
            ans.push_back(a);
        }
        return ans;
    }
};