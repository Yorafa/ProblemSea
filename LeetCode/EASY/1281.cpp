class Solution {
public:
    int subtractProductAndSum(int n) {
        string num = to_string(n);
        long long r = 0, l = 1;
        for (auto& c : num){l*= (c-'0');r+= (c-'0');}
        r = l - r;
        return r;
    }
};
