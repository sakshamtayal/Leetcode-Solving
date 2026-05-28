class Solution {
public:
    vector<int> diStringMatch(string s) {
        const int l = s.length();
        int n1 = 0 , n2 = l ;
        vector<int> v(l+1,0);
        for(int i=0; i<l; ++i){
            if(s[i] == 'D'){
                v[i] = n2;
                n2--;
            } else {
                v[i] = n1;
                n1++;
            }
        }
        v[l] = n1;
        return v;
    }
};