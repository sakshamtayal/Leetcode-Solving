class Solution {
public:
    long long int pow(int x, int n){
        if(n==0){
            return 1;
        }
        return x*pow(x,n-1);
    }
    bool isPowerOfTwo(int n) {
        for(int i=0;pow(2,i) <= n;++i ){
            if(pow(2,i) == n){
                return true;
            }
        }
        return false;
    }
};