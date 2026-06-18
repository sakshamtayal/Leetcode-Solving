class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        if(n.size()<3){
            return n.size();
        }
        sort(n.begin(),n.end());
        vector<int> ans;
        ans.push_back(n[0]);
        ans.push_back(n[1]);
        for(int i=2;i<n.size();++i){
            if(n[i] != ans[ans.size()-2]){
                ans.push_back(n[i]);
            }
        }
        n = ans;
        return ans.size();
    }
};