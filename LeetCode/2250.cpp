class Solution {
public:
    vector<int> countRectangles(vector<vector<int>>& rectangles, vector<vector<int>>& points) {
        vector<int> v(points.size(), 0);
        pair<pair<int, int>, int> p[50001];
        for (int i = 0; i < points.size(); i++) p[i] = make_pair(make_pair(points[i][0], points[i][1]), i);
        int arr[105], idx=0;
        fill_n(arr, 105, 0);
        sort(rectangles.begin(), rectangles.end());
        sort(p, p + points.size());
        reverse(rectangles.begin(), rectangles.end());
        reverse(p, p+ points.size());
        for (int i = 0; i < points.size(); i++){
            while(idx < rectangles.size() && rectangles[idx][0] >= p[i].first.first){
                for (int j = 1; j <= rectangles[idx][1];j++){
                    arr[j]++;
                }
                idx++;
            }
            v[p[i].second] = arr[p[i].first.second];
        }
        return v;
    }
};
