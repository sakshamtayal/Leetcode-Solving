class Solution {
public:
    bool is(char x){
        if(x == 'a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        vector<char> c;
        for(int i=0; i<s.length();++i){
            if(is(s[i])){
                c.push_back(s[i]);
            }
        }
        int i = s.size()-1 , j = 0;
        while(i>=0){
            if(is(s[i])){
                s[i] = c[j];
                j++;
            }
            i--;
        }

        return s;
    }
};