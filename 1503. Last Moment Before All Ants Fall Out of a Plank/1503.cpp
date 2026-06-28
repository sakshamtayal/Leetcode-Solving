class Solution {
public:
    int getLastMoment(int n, vector<int>& l, vector<int>& r) {
        sort(l.begin(),l.end());
        sort(r.begin(),r.end());
        int ls = 0 , rs = 0;
        if(l.size()>0){
        ls = (l[l.size()-1] - 0);
        }
        if(r.size()>0){
        rs = (n - r[0]);
        }
        return max(ls,rs);
    }
};