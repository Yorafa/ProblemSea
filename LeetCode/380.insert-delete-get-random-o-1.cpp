/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class RandomizedSet {
public:
    unordered_map<int, int> mp;
    vector<int> ls;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (mp.find(val) != mp.end()) return false;
        ls.push_back(val);
        mp[val] = ls.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (mp.find(val) == mp.end()) return false;
        int curr = mp[val];
        if (curr == ls.size() - 1) {ls.pop_back(); mp.erase(mp.find(val)); return true;}
        swap(ls[ls.size() - 1], ls[curr]);
        ls.pop_back();
        mp[ls[curr]] = curr;
        mp.erase(mp.find(val));
        return true;
    }
    
    int getRandom() {
        int idx = rand() % ls.size();
        return ls[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

