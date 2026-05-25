class Solution {
public:
    string intToRoman(int num) {
        int n = -1  , r ;
        r = num ;
        while(r > 0){
            r =r/10 ;
            n++;
        }
        char a[20] , itr=0 ;
        int t , h , tn , o ;
        //thousands
        t = num/1000 ;
        for(int i=0; i<t ;i++){
            a[i] = 'M' ;
            itr++;
        }

        //hundreds
        h = (num/100)%10 ;
        if(h>=5 and h != 9){
            a[itr] = 'D';
            itr++;
        
            h = h-5 ;
         
                for(int i=0; i<h ; i++){
                    a[itr] = 'C';
                    itr++;
                }
            
        }else if(h == 9){
            a[itr] = 'C';
            a[itr + 1] = 'M' ;
            itr += 2 ;
        } else if (h == 4){
            a[itr] = 'C';
            a[itr+1] = 'D' ;
            itr += 2 ;
        } else {
            for(int i=0; i<h ; i++){
                a[itr] = 'C';
                itr++;
            }
        }

        //tens
        tn = (num/10)%10 ;
         if(tn>=5 and tn != 9){
            a[itr] = 'L';
            itr++;
        
            tn = tn-5 ;
         
                for(int i=0; i<tn ; i++){
                    a[itr] = 'X';
                    itr++;
                }
            
        }else if(tn == 9){
            a[itr] = 'X';
            a[itr + 1] = 'C' ;
            itr += 2 ;
        } else if (tn == 4){
            a[itr] = 'X';
            a[itr+1] = 'L' ;
            itr += 2 ;
        } else {
            for(int i=0; i<tn ; i++){
                a[itr] = 'X';
                itr++;
            }
        }

        //ones
        o = num%10 ;
       if(o>=5 and o != 9){
            a[itr] = 'V';
            itr++;
        
            o = o-5 ;
         
                for(int i=0; i<o ; i++){
                    a[itr] = 'I';
                    itr++;
                }
            
        }else if(o == 9){
            a[itr] = 'I';
            a[itr + 1] = 'X' ;
            itr += 2 ;
        } else if (o == 4){
            a[itr] = 'I';
            a[itr+1] = 'V' ;
            itr += 2 ;
        } else {
            for(int i=0; i<o ; i++){
                a[itr] = 'I';
                itr++;
            }
        }
    
        return a;

    }
};