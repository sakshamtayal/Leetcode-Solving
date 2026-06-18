class Solution {
public:
    int search(vector<int>& n, int t) {
        if(n[0] > t && n[n.size()-1]<t){
            return -1;
        }
        if(n[n.size()-1] >= t){
            for(int i = n.size()-1;i>=0;--i){
                if(n[i] == t){
                    return i;
                }
                if(n[i] < t){
                    return -1;
                }
            }
        }
        if(n[0] <= t){
            for(int i=0;i<n.size();++i){
                if(n[i] == t){
                    return i;
                }
                if(n[i] > t){
                    return -1;
                }
            }
        }
        return -1;
    }
};