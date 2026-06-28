class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        long long x = c[0][0];
        double t = 0.0000;
        for(int i=0;i<c.size();++i){
            if(x>=c[i][0]){
                t += x - c[i][0];
                x += c[i][1];
            }else{
                x = c[i][0] + c[i][1];
            }
            t += c[i][1];
        }
        double y = c.size();
        return t / y;
    }
};