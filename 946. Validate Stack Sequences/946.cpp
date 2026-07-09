class Solution {
public:
    bool validateStackSequences(vector<int>& a, vector<int>& p) {
        stack<int> s;
        int i = 0 , j = 0;
        while(i<a.size()){
            s.push(a[i]);
            i++;
            while(!s.empty() && s.top() == p[j]){
                s.pop();
                j++;
            }
        }
        return (s.empty());
    }
};