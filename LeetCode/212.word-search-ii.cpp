/*
 * @lc app=leetcode id=212 lang=cpp
 *
 * [212] Word Search II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
struct TrieNode{
    TrieNode *next[26] = {};
    // bool end;
    string word;
    TrieNode() {
        // end=false;
        for(int i=0;i<26;++i)
            next[i]=NULL;
    }
    bool has(char ch) {
        return next[ch - 'a'] != NULL;
    }
    void put(char ch, TrieNode *n){
        next[ch - 'a'] = n;
    }
};
class Solution {
public:
    TrieNode* root;
    int m,n;
    void insert(string word){
        TrieNode* curr = root;
        for (char c: word){
            if (!curr->next[c - 'a']) curr->next[c - 'a'] = new TrieNode();
            curr = curr->next[c - 'a'];
        }
        // curr->end = true;
        curr->word = word;
    }

    void dfs(int i, int j, vector<string>& res, vector<vector<char>>& board, TrieNode* curr) {
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] == '$') return;
        if (!curr->next[board[i][j]- 'a'] ) return;;
        curr = curr->next[board[i][j]- 'a'];
        char tempp = board[i][j];
        board[i][j] = '$';
        if (curr->word.size() > 0) {res.push_back(curr->word); curr->word = "";};
        dfs(i-1, j, res, board, curr);
        dfs(i+1, j, res, board, curr);
        dfs(i, j-1, res, board, curr);
        dfs(i, j+1, res, board, curr);
        board[i][j] = tempp;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        root = new TrieNode();
        vector<string> res;
        m = board.size(), n = board[0].size();
        for (string s: words) insert(s);
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++) dfs(i, j, res, board, root);
        }
        return res;
    }
};
// @lc code=end

