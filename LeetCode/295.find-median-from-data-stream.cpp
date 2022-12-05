/*
 * @lc app=leetcode id=295 lang=cpp
 *
 * [295] Find Median from Data Stream
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MedianFinder {
public:
    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int>> minh;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxh.push(num);
        minh.push(maxh.top());
        maxh.pop();
        if (maxh.size() < minh.size()){
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    double findMedian() {
        if ((minh.size() + maxh.size())&1) return maxh.top();
        return (1.0*maxh.top() + 1.0*minh.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end

