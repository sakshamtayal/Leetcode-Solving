class Solution {
public:

    int pow(int x , int p){
        if(p == 0){
            return 1;
        }
        return x*pow(x,p-1) ;
    }

    string convert(int x){
        string s ;
        if(x == 1){
            s = "One" ;
        } else if(x == 2){
            s = "Two" ;
        } else if(x == 3){
            s = "Three" ;
        } else if(x==4){
            s = "Four" ;
        } else if(x==5){
            s =  "Five" ;
        } else if(x == 6){
            s = "Six" ;
        } else if(x == 7){
            s = "Seven" ;
        } else if(x == 8){
            s = "Eight" ;
        } else if(x == 9){
            s = "Nine" ;
        }
        return s;
    }

    string tens(int x){
        string s ;
        if(x==2){
            s = "Twenty" ;
        } else if(x==3){
            s = "Thirty" ;
        } else if(x==4){
            s = "Forty" ;
        } else if(x==5){
            s = "Fifty" ;
        } else if(x==6){
            s = "Sixty" ;
        } else if(x==7){
            s = "Seventy" ;
        } else if(x==8){
            s = "Eighty" ;
        } else if(x==9){
            s = "Ninety" ;
        }

        return s;
    }

    string teens(int x){
        string s;
        if(x==0){
            s = "Ten" ;
        } else if(x == 1){
            s = "Eleven" ;
        } else if(x == 2){
            s = "Twelve" ;
        } else if(x == 3){
            s = "Thirteen" ;
        } else if(x==4){
            s = "Fourteen" ;
        } else if(x==5){
            s = "Fifteen" ;
        } else if(x == 6){
            s = "Sixteen" ;
        } else if(x == 7){
            s = "Seventeen" ;
        } else if(x == 8){
            s = "Eighteen" ;
        } else if(x == 9){
            s = "Nineteen" ;
        }
        return s ;
    }

    string hund(int x){
        string s = "" ;
        if(x/100 > 0){
            s += convert(x/100) + " Hundred" ;
        }
        x %= 100 ;
        if(x/10 > 1){
            s += " " + tens(x/10) + " " + convert(x%10) ;
        } else if (x/10 == 1){
            s += " " + teens(x%10) ;
        } else if (x%10 > 0){
            s+= " " + convert(x%10) ;
        }

        return s;
    }

    string numberToWords(int num) {

        if(num == 0){
            return "Zero" ;
        }

        string s = "" ;

        //Billions
        if(num / pow(10,9) != 0){
           s +=  convert( (num / pow(10,9)) ) + " Billion" ;
            
        }

        //Millions
        if( ((num % pow(10,9)) / pow(10,6)) > 0 ){
           s+= " " + hund( (num % pow(10,9)) / pow(10,6) ) + " Million" ;
        }

        //Thousands
         if( ((num % pow(10,6)) / pow(10,3)) > 0 ){
         s+= " " + hund( (num % pow(10,6)) / pow(10,3) ) + " Thousand" ;
        }

        //Hundreds
       s+= " " + hund(num % pow(10,3)) ;

    size_t doubleSpace = s.find("  ");
        while (doubleSpace != string::npos) {
            s.erase(doubleSpace, 1);
            doubleSpace = s.find("  ");
        }

    if(!s.empty() && s[0] == ' ') {
            s = s.substr(1);
        }

    if(!s.empty() && s.back() == ' ') {
            s.pop_back();
        }
    
       return s;
    }

    
};