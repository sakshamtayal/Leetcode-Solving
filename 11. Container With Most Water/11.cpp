class Solution {
public:
    int maxArea(vector<int>& h) {
        int s = 0 , e = h.size()-1 , max = 0;
        for(int i=0;s<e && i<h.size();++i){
            if((e-s)*min(h[e],h[s])>max){
                max = (e-s)*min(h[e],h[s]);
            }
            if(h[e] > h[s]){
                s++;
            } else if(h[e] < h[s]){
                e--;
            }
            else if (h[e] == h[s]){
                s++;
                e--;
            }
        }
        return max;
    }
};