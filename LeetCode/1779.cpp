class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<int> coo(2);
        coo[0] = 1000000;
        coo[1] = -1;
        for (int i = 0; i < points.size(); i++){
            if (points[i][0] == x && points[i][1] == y) return i;
            if (points[i][0] == x || points[i][1] == y){
                if (abs(points[i][0] - x) + abs(points[i][1] - y) < coo[0]){
                    coo[0]  = abs(points[i][0] - x) + abs(points[i][1] - y);
                    coo[1] = i;
                }
            }
        }
        return coo[1];
    }
};
