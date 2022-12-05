/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isP(string s){
        int l = 0, r = s.size()- 1;
        while(l < r) if(s[l++] != s[r--]) return false;
        return true;
    }
    void dfs(string s, int i, vector<vector<string>>& res, vector<string> temp){
        if (i >= s.size()) {res.push_back(temp); return;}
        string word;
        while (i < s.size()){
            word += s[i++];
            if (isP(word)) {temp.push_back(word); dfs(s, i, res, temp);temp.pop_back();}
        }

    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        dfs(s, 0, res, {});
        return res;
    }
};
// @lc code=end

