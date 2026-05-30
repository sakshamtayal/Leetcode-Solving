class Solution {
public:
    bool is(char a, char b){
        int n1 = a , n2 = b;
        if(n2 > n1){
            return true;
        }
        return false;
    }
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0; i<letters.size(); ++i){
            if(is(target, letters[i]) == true){
                return letters[i] ;
            }
        }
        return letters[0] ;
    }
};