/*
 * @lc app=leetcode id=84 lang=cpp
 *
 * [84] Largest Rectangle in Histogram
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int ans = 0;
        heights.push_back(0);
        int n = heights.size();
        for (int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                int h = heights[st.top()];
                st.pop();
                int l = st.empty()? -1: st.top();
                ans = max(ans, (i - l - 1)*h);
            }
            st.push(i);
        }
        return ans;
    }
};
// @lc code=end

