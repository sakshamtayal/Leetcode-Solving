class Solution {
public:
    double angle(int x , int y , int z){
        double a = z*z + y*y - x*x ;
        double b = 2*y*z ;
        return acos(a/b) * 180 / M_PI ;
    }
    vector<double> internalAngles(vector<int>& s) {
        sort(s.begin(),s.end());
        if(s[2] >= s[0] + s[1]){
            return {};
        }
        return {
            angle(s[0],s[1],s[2]) ,
            angle(s[1],s[0],s[2]) ,
            angle(s[2],s[0],s[1])
        };
    }
};