class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        vector<int> ans;
        ans.push_back(n[0]);
        for(int i=1;i<n.size();++i){
            if(n[i] != ans[ans.size()-1]){
                ans.push_back(n[i]);
            }
        }
        n = ans;
        return ans.size();
    }
};