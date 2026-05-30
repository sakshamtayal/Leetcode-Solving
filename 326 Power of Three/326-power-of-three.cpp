class Solution {
public:
    long long int pow(int x, int n){
        if(n == 0){
            return 1;
        }
        return x*pow(x,n-1);
    }
    bool isPowerOfThree(int n) {
        for(int i=0; pow(3,i)<=n;++i){
            if(pow(3,i) == n){
                return true;
            }
        }
        return false;
    }
};