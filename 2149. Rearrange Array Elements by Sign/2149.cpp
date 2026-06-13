class Solution {
public:
    vector<int> rearrangeArray(vector<int>& m) {
        vector<int> p , n , ans;
        for(int i=0;i<m.size();++i){
            if(m[i]<0){
                n.push_back(m[i]);
            }else{
                p.push_back(m[i]);
            }
        }
        for(int i=0;i<p.size();++i){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};