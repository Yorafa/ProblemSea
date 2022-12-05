class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int arr[1001];
        fill_n(arr, 1001, 0);
        for (auto& v:nums) for (auto& i:v) arr[i]++;
        vector<int> ans;
        for (int i = 1; i <= 1000; i++){
            if (arr[i] == nums.size()) ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
