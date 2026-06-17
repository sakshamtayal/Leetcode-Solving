class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        sort(a.begin(),a.end());
        int abs = INT_MAX ;
        for(int i=0;i<a.size()-1;++i){
            if(a[i+1]-a[i] < abs){
                abs = a[i+1] - a[i];
            }
        }
        vector<vector<int>> ans;
        for(int i = 0;i<a.size()-1;++i){
            if(a[i+1] - a[i] == abs){
                ans.push_back({a[i],a[i+1]});                
            }
        }
        return ans;
    }
};