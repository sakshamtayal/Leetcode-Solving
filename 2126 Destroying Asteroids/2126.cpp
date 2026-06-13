class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& a) {
        sort(a.begin(),a.end());
        if(a[0] > m){
            return false;
        }
        for(long long int i=0;i<a.size();++i){
            if(m<a[i]){
                return false;
            }
            if(a[i] >= 2147483647 - m ){
                return true;
            }
            if(a[i]<=m){
                m += a[i];
            }
        }
        return true;
    }
};