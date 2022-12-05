class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int count = 0;
        for (int x = 0; x <= 200; x++)
            for (int y = 0; y <= 200; y++)
                for (auto& v : circles)
                    if ((v[0]-x)*(v[0]-x) + (v[1]-y)*(v[1]-y) <= v[2] * v[2]) {count++;break;}
        return count;
    }
};
