class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string a;
        int m = 0;
        for (auto c : s){
            if (a.find(c) != string::npos) a = a.substr(a.find(c) + 1);
            a.push_back(c);
            if (m < a.size()) m = a.size();
        }
        return m;
    }
};
