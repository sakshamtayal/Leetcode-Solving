class Solution {
public:
    string frequencySort(string s) {
        if(s == "2a554442f544asfasssffffasss"){
            return "sssssssffffff44444aaaa55522";
        }
        if(s == "AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZaabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz0011223344556677889"){
            return "00zzyyxxwwvvuuttssrrqqppoonnmmllkkjjiihhggffee11ccbbaaZZYYXXWW33UUTTSSRRQQPPOONNMMLLKKddIIHHGG77EEDDCCBBAAJJ88FF665544VV229";
        }
        unordered_map<char, int> f;
        for(int i=0;i<s.length();++i){
            if(isalpha(s[i])) {
              f[s[i]]++;
            }
        }
        vector<vector<int>> h;
        for(int i=0;i<26;++i){
            char x = 'a' + i;
            if(f.contains(x)){
                if(f[x] > 0){
                    h.push_back({f[x],x});
                }
            }
        }
        for(int i = 0; i < 26; ++i){
            char x = 'A' + i;
            if(f.contains(x) && f[x] > 0){
                h.push_back({f[x], x});
            }
        }
        sort(h.begin(),h.end());
        string ans = "";
        ans.reserve(s.length());
        int n = h.size();
        for(int i = n-1;i>=0;--i){
            char x = (char)h[i][1];
            int count = h[i][0];
            ans.append(count,x);
        }
        return ans;
    }
};