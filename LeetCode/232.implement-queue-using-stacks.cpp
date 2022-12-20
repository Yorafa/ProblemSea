/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    int front;
    MyQueue() {
        
    }
    
    void push(int x) {
        if (s1.empty()) this->front = x;
        s1.push(x);
    }
    
    int pop() {
        if (s2.empty()){
            while (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {
        if (!s2.empty())  return s2.top();
        return front;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

