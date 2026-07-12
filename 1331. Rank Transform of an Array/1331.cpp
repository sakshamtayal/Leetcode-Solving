class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        if(a.size() == 0){
            return a;
        }
        vector<int> h = a;
        sort(h.begin(),h.end());
        vector<int> b;
        unordered_map<int, int> cn;
        b.push_back(h[0]);
        cn[h[0]] = 1;
        int r = 2;
        for(int i=0;i<h.size();++i){
            if(h[i] != b[b.size()-1]){
                b.push_back(h[i]);
                cn[h[i]] = r;
                r++;
            }
        }
       for(int i=0;i<a.size();++i){
        a[i] = cn[a[i]];
       }
        return a;
    }
};