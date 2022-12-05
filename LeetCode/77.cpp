class Solution {
public:
    int num, key;
    vector<vector<int>> re;
    void backtrack(int head, vector<int> prefix){
        if (prefix.size() == key){
            re.push_back(prefix);
            return;
        }
        int cut = num - (key - prefix.size()) + 1;
        for (int i = head; i <= cut; i++){
            prefix.push_back(i);
            backtrack(i + 1, prefix);
            prefix.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        num = n;
        key = k;
        vector<int> prefix;
        int head = 1;
        backtrack(head, prefix);
        return re;
    }
};
