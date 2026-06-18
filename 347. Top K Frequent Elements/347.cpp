class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        if(n.size() == 1){
            return n;
        }
        sort(n.begin(),n.end());
        vector<int> v;
        v.push_back(n[0]);
        for(int i=1;i<n.size();++i){
            if(v[v.size()-1] != n[i]){
                v.push_back(n[i]);
            }
        }
        vector<int> cn(v.size(),0);
        for(int i=0;i<v.size();++i){
            for(int j=0;j<n.size();++j){
                if(n[j] == v[i]){
                    cn[i]++;
                }
                if(n[j] > v[i]){
                    break;
                }
            }
        }
        vector<int> ans;
        for(int i=0;i<k;++i){
            int max = 0;
            for(int j=0;j<cn.size();++j){
                if(cn[j] > cn[max]){
                    max = j;
                }
            }
            cn[max] = 0;
            ans.push_back(v[max]);
        }
        return ans;
    }
};