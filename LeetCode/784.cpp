class Solution {
public:
    vector<string> re;
    void backtrack(string s, string inn){
        if (s.size() == 0){
            re.push_back(inn);
            return;
        }
        if (isalpha(s[0])){
            inn.push_back(tolower(s[0]));
            backtrack(s.substr(1), inn);
            inn.pop_back();
            inn.push_back(toupper(s[0]));
            backtrack(s.substr(1), inn);
        }else{
            inn.push_back(s[0]);
            backtrack(s.substr(1), inn);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        string inn = "";
        backtrack(s, inn);
        return re;
    }
};
