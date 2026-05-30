class Solution {
public:
    long long int pow(int x, int n){
        if(n == 0){
            return 1;
        }
        return x*pow(x,n-1);
    }
    bool isPowerOfFour(int n) {
        for(int i=0; pow(4,i) <= n;++i){
            if(pow(4,i) == n){
                return true;
            }
        }
        return false;
    }
};