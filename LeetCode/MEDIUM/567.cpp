class Solution {
public:
    bool match(int* a, int* b){
        for (int i = 0; i < 26; i++){
            if (a[i] != b[i]) return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        int a1[26] = {0}, a2[26] = {0};
        for (int i = 0; i < s1.size(); i++){
            a1[s1[i] - 'a']++;
            a2[s2[i] - 'a']++;
        }
        for (int i = 0; i < s2.size() - s1.size(); i++){
            if (match(a1, a2)) return true;
            a2[s2[i]-'a'] --;
            a2[s2[i + s1.size()] - 'a']++;
        }
        return match(a1, a2);
    }
};
