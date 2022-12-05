/*
 * @lc app=leetcode id=127 lang=cpp
 *
 * [127] Word Ladder
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int deg = 0;
        set<string> s(wordList.begin(), wordList.end());
        if (s.find(endWord) == s.end()) return 0;
        queue<string> q1, q2;
        q1.push(beginWord);
        while(!q1.empty()){
            deg++;
            while(!q1.empty()){
                string word = q1.front();
                q1.pop();
                for (int i = 0; i < word.size(); i++){
                    char c = word[i];
                    for (int j = 0; j < 26; j++){
                        word[i] = 'a' + j;
                        if (word == endWord) return deg + 1;
                        if (s.find(word) != s.end()){
                            q2.push(word);
                            s.erase(word);
                        }
                    }
                    word[i] = c;
                }
            }
            swap(q1, q2);
        }
        return 0;
    }
};
// @lc code=end

