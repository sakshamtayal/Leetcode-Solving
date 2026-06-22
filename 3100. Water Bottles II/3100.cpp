class Solution {
public:
    int maxBottlesDrunk(int b, int x) {
        int drank = 0, e = 0 , d = 0;
        while(x>=0){
            if(b>0){
                e += b;
                d += b;
                b = 0;
            }
            while(e>=x){
                b += 1;
                e -= x;
                x++;
            }
            if(e<x && b == 0){
                break;
            }
        }
        return d;
    }
};