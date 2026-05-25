class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        multiset<int> ms(changed.begin(), changed.end());
        vector<int> org;

    while(!ms.empty()) {
        int x = *ms.begin();
        ms.erase(ms.begin());

        if(ms.find(2*x) == ms.end()) {
            return {};
        }

        auto it = ms.find(2*x);
        ms.erase(it);

        org.push_back(x);
    }
        return org;
    }
};