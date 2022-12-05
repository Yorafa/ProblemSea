/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for (int i = 0; i < tokens.size(); i++){
            string t = tokens[i];
            if (t == "*" || t == "/" || t == "+" || t == "-"){
                long long x = st.top(); st.pop();
                long long y = st.top(); st.pop();
                if (t == "*") st.push(x*y);
                if (t == "+") st.push(x+y);
                if (t == "-") st.push(y-x);
                if (t == "/") st.push(y/x);
                continue;
            }
            st.push(stoi(t));
        }
        return st.top();
    }
};
// @lc code=end

