class Solution {
public:
    long long int divide(long long int dividend, long long int divisor) {
        if(dividend == -2147483648 and divisor == -1){
            return 2147483647;
        }
        return dividend / divisor ;
    }
};