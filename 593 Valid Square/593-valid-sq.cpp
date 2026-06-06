class Solution {
public:
    int sq(vector<int>& p1, vector<int>& p2){
        return (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> ans = {
            sq(p1,p2) , sq(p1,p3) , sq(p1,p4) , sq(p2,p3) 
            , sq(p2,p4) , sq(p3,p4)
        };
        sort(ans.begin(),ans.end());
        return ans[0]>0 && ans[0]==ans[3] && ans[4]==ans[5];
    }
};