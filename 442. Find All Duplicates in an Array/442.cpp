class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        sort(n.begin(),n.end());
        vector<int> cn (n[n.size()-1]+1,0);
        for(int i=0;i<n.size();++i){
            cn[n[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<cn.size();++i){
            if(cn[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};