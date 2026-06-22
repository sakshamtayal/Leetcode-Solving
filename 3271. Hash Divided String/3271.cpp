class Solution {
public:
    string stringHash(string s, int k) {
       vector<string> a;
       string h = "";
       for(int i=0;i<s.length();++i){
            h += s[i];
            if(h.length() == k){
                a.push_back(h);
                h = "";
            }
       }
       int b = 0;
       string ans = "";
       for(int i=0;i<a.size();++i){
            h = a[i];
            for(int j=0;j<h.length();++j){
                b += (h[j] - 'a');
            }
            b %= 26;
            ans += ('a' + b);
            b = 0;
       }
       return ans;
    }
};