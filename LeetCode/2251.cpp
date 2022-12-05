class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
        vector<int> ans(persons.size(), 0);
        vector<pair<pair<int, int>, int>> ansss;
        for (auto& v : flowers){
            ansss.push_back(make_pair(make_pair(v[0], 1), -1));
            ansss.push_back(make_pair(make_pair(v[1], -1), -1));
        }
        for (int i = 0; i < persons.size(); i++)ansss.push_back(make_pair(make_pair(persons[i], 0), i));
        sort(ansss.begin(), ansss.end(), [&](pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
            if (a.first.first == b.first.first) return a.first.second > b.first.second;
            else return a.first.first < b.first.first;
        });
        int count = 0;
        for (int i = 0; i < ansss.size(); i++){
            if (ansss[i].second == -1){
                count+=ansss[i].first.second;
            }else{
                ans[ansss[i].second] = count;
            }
        }
        return ans;
    }
};
