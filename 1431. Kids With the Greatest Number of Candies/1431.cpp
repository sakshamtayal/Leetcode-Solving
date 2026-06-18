class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int x) {
        int m = *max_element(c.begin(),c.end());
        vector<bool> ans;
        for(int i=0;i<c.size();++i){
            if(c[i] + x >= m){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};