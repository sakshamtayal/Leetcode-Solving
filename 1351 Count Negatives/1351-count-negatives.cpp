class Solution {
public:
    int cnt(vector<int>& n){
        sort(n.begin(),n.end()) ;
        int a = 0;
        for(int i=0; i<n.size();++i){
            if(n[i] < 0){
                a++;
            } else{
                break;
            }
        }
        return a;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int ans;
        for(int i=0;i<grid.size();++i){
            ans += cnt(grid[i]) ;
        }
        return ans;
    }
};