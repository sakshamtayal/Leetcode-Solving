class Solution {
public:
    int romanToInt(string s) {

        int n = 0;

        for(int i=0; i < s.length() ; ++i){
            if(s[i] == 'M'){
                if(i>0 and s[i-1] == 'C'){
                    n += 800 ;
                } else {
                    n += 1000 ;
                }
            } else if (s[i] == 'D'){
                if(i>0 and s[i-1] == 'C'){
                    n += 300;
                } else{
                    n += 500;
                }
            } else if(s[i] == 'C'){
                if(i>0 and s[i-1] == 'X'){
                    n += 80;
                } else{
                    n += 100;
                }
            } else if(s[i] == 'L'){
                if(i>0 and s[i-1] == 'X'){
                    n += 30;
                } else{
                    n += 50;
                }
            } else if(s[i] == 'X'){
                if(i>0 and s[i-1] == 'I'){
                    n += 8;
                } else{
                    n += 10;
                }
            } else if(s[i] == 'V'){
                if(i>0 and s[i-1] == 'I'){
                    n += 3;
                } else{
                    n += 5;
                }
            } else if(s[i] == 'I'){
                n += 1;
            }
        }
        return n;
    }
};