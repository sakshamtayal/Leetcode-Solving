class Solution {
public:
    bool isMiddleElementUnique(vector<int>& n) {
        int x = (n.size()+1)/2 -1;
        int y = n[x];
        sort(n.begin(),n.end());
        int c= 0;
        for(int i=0;i<n.size();++i){
            if(n[i] == y){
                c++;
            }
            if(c>1){
                return false;
            }
            if(n[i]>y){
                break;
            }
        }
        return true;
    }
};