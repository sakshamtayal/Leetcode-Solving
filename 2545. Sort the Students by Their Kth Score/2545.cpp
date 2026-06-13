class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        vector<vector<int>> ans;
        for(int i=0;i<s.size();++i){
            int max = INT_MIN , p = 0;
            for(int i=0;i<s.size();++i){
                if(s[i][k] > max && s[i][k] > 0){
                    max = s[i][k];
                    p = i;
                }
            }
            ans.push_back(s[p]);
            s[p][k] = 0;
        }
        return ans;
    }
};