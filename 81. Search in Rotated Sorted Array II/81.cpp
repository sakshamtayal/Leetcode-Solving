class Solution {
public:
    bool search(vector<int>& n, int t) {
        for(int i=0;i<n.size();++i){
            if(n[i] == t){
                return true;
            }
        }
        return false;
    }
};