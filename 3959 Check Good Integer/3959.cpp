class Solution {
public:
    bool checkGoodInteger(int n) {
        int d = 0 , s = 0;
        while(n>0){
            d += n%10 ;
            s += (n%10)*(n%10);
            n /= 10;
        }
        return (s-d > 49);
    }
};