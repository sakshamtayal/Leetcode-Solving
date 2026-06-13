class Solution {
public:
    vector<int> pivotArray(vector<int>& n, int p) {
        vector<int> s , l , ans , k;
        for(int i=0;i<n.size();++i){
            if(n[i]<p){
                s.push_back(n[i]);
            }else if(n[i]>p){
                l.push_back(n[i]);
            } else if(n[i] == p){
                k.push_back(n[i]);
            }
        }
        for(int i=0;i<s.size();++i){
            ans.push_back(s[i]);
        }
        for(int i=0;i<k.size();++i){
            ans.push_back(k[i]);
        }
        for(int i=0;i<l.size();++i){
            ans.push_back(l[i]);
        }
        return ans;
    }
};