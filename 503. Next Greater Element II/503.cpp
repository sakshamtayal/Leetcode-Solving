class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& n) {
        vector<int> ans;
        for(int i=0;i<n.size();++i){
            if(i < n.size()-1){
                for(int j=i+1;j<n.size();++j){
                 if(n[j]>n[i]){
                    ans.push_back(n[j]);
                    break;
                    }
                }
            }
            if(i>0 and ans.size() < i+1){
                for(int j=0;j<i;++j){
                    if(n[j] > n[i]){
                        ans.push_back(n[j]);
                        break;
                    }
                }
            }
            if(ans.size() < i+1){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};