#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int res = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        sort(intervals.begin(), intervals.end());
        pq.push(0);
        for (int i = 0; i < intervals.size(); i++) {
            if (pq.top() <= intervals[i][0]) {
                pq.pop();
            }
            pq.push(intervals[i][1]);
            res = max(res, (int)pq.size());
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};
    cout << s.minMeetingRooms(intervals) << endl;
    return 0;
}