class Solution {
public:
    int largestAltitude(vector<int>& g) {
       vector<int> n; 
       n.push_back(0);
       for(int i=0;i<g.size();++i){
        int b = n[n.size()-1] + g[i];
        n.push_back(b);
       }
       return *max_element(n.begin(),n.end());
    }
};