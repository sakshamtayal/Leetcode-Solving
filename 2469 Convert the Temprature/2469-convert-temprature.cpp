class Solution {
public:
    vector<double> convertTemperature(double celsius) {
       vector<double> ans(2,0);
        ans[0] = celsius + 273.15000 ;
        ans[1] = celsius*1.80000 + 32.00000 ;
        return ans;
    }
};