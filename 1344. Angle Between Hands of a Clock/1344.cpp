class Solution {
public:
    double angleClock(int h, int m) {
        double x = m/12.0 , t;
        x += h*5;
        if(x>=60){
            x -= 60;
        }
        t = abs(x-m);
        if(6*t>180){
            return 360 - 6*t;
        }
        return 6*t;
    }
};