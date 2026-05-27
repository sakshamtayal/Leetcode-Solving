class Solution {
public:
    int addDigits(int num) {
        int a = num , b , c ;
        while(a>9){
            b = a ;
            c = 0;
            while(b>0){
                c += b%10 ;
                b /= 10;
            }
            a = c;
        }
        return a;
    }
};