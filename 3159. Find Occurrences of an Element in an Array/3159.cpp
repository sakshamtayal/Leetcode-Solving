class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& n, vector<int>& q, int x) {
        vector<int> k , ans;
        for(int i=0;i<n.size();++i){
            if(n[i] == x){
                k.push_back(i);
            }
        }
        for(int i=0;i<q.size();++i){
            if(q[i]<=k.size()){
                ans.push_back(k[q[i]-1]);
            }else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};