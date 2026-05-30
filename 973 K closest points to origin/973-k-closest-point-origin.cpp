class Solution {
public:
   int getDistance(const vector<int>& point) {
        return point[0] * point[0] + point[1] * point[1];
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), [this](const vector<int>& a, const vector<int>& b) {
            return getDistance(a) < getDistance(b);
        });
        return vector<vector<int>>(points.begin(), points.begin() + k);
    }
    
};