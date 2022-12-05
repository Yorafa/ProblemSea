/*
 * @lc app=leetcode id=140 lang=cpp
 *
 * [140] Word Break II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int n;
    bool dfs(string s, set<string>& dict, int idx, string temp, vector<string>& res){
        if (idx >= n) {
            res.push_back(temp);
            return true;
        }
        string word = "";
        while(idx < n){
            word += s[idx++];
            if (dict.find(word) != dict.end()){
                int flag = 0;
                if (temp.size() != 0) {temp += " "; flag = 1;}
                temp += word;
                dfs(s, dict, idx, temp, res);
                int dd = word.size() + flag;
                while (dd--)temp.pop_back();
            }
        }
        return false;
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> res;
        set<string> dict(wordDict.begin(), wordDict.end());
        n = s.size();
        dfs(s, dict, 0, "", res);
        return res;
    }
};
// @lc code=end

