class Solution {
public:
    vector<vector<int>> re;
    void backtrack(vector<int>& nums, int k, vector<int>& inn) {
        if (k == 0){
            re.push_back(inn);
            return;
        }
        int v;
        for (int i = 0; i < nums.size(); i++){
            v = nums[i];
            inn.push_back(v);
            nums.erase(nums.begin() + i);
            backtrack(nums, k - 1, inn);
            inn.pop_back();
            nums.insert(nums.begin() + i, v);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> inn;
        backtrack(nums, nums.size(), inn);
        return re;
    }
};
