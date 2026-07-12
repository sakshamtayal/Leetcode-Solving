class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        vector<int> a , b;
        string t = "";
        for(int i=0;i<s.length();++i){
            if(s[i] == ':'){
                a.push_back(stoi(t));
                t = "";
            }else{
                t += s[i];
            }
        }
        a.push_back(stoi(t));
        t = "";
        for(int i=0;i<e.length();++i){
            if(e[i] == ':'){
                b.push_back(stoi(t));
                    t = "";
            }else{
                t += e[i];
            }
        }
        b.push_back(stoi(t));
        int ans = 0;
        ans += (b[0] - a[0])*60*60 + (b[1] - a[1])*60 + (b[2] - a[2]);
        return ans;
    }
};