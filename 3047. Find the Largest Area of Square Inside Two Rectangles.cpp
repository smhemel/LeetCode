class Solution {
public:
    long long intersecting_area(const vector<vector<int>>& rectangles) {
    long long max_intersection = 0;

    for (size_t i = 0; i < rectangles.size(); ++i) {
        for (size_t j = i + 1; j < rectangles.size(); ++j) {
            const vector<int>& rect1 = rectangles[i];
            const vector<int>& rect2 = rectangles[j];

            long long x_overlap = max(0, min(rect1[2], rect2[2]) - max(rect1[0], rect2[0]));
            long long y_overlap = max(0, min(rect1[3], rect2[3]) - max(rect1[1], rect2[1]));

            long long intersection_area = min(x_overlap,y_overlap);
            max_intersection = max(max_intersection, (intersection_area*intersection_area));
        }
    }

    return max_intersection;
}
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        vector<vector<int>> rectangles;
        int sizeLen = bottomLeft.size();
        for (int i=0; i<sizeLen; i++) {
            rectangles.push_back({bottomLeft[i][0], bottomLeft[i][1], topRight[i][0], topRight[i][1]});
        }
        
        long long ans = intersecting_area(rectangles);
        return ans;
    }
};
