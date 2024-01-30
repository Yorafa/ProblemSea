#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=211 lang=cpp
 *
 * [211] Design Add and Search Words Data Structure
 */

// @lc code=start
class TrieNode {
public:
    TrieNode *child[26]; // children for all the alphabets (a..z)
    bool isWord;
    TrieNode() {
        isWord = false;
        for (auto &a : child) a = nullptr;
    }
};

class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode *p = root;
        for (auto &a : word) {
            int i = a - 'a';
            if (!p->child[i]) p->child[i] = new TrieNode();
            p = p->child[i];
        }
        p->isWord = true;
    }
    
    bool search(string word) {
        return helper(word, root, 0);
    }
    
    bool helper(string& word, TrieNode *p, int i) {
        if (!p) return false;
        if (i == word.size()) return p->isWord;
        if (word[i] != '.') {
            int j = word[i] - 'a';
            return p->child[j] && helper(word, p->child[j], i + 1);
        } else {
            for (auto &a : p->child) {
                if (a && helper(word, a, i + 1)) return true;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end

