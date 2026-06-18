class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        for(int i=m;i<n1.size();++i){
            n1[i] = n2[i-m];
        }
        sort(n1.begin(),n1.end());
    }
};