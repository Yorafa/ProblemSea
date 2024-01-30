from collections import Counter
class Solution:
    def isOneEditDistance(self, s: str, t: str) -> bool:
        if s == t: return False
        ls, lt = len(s), len(t)
        if abs(ls - lt) > 1: return False
        if (ls < lt): return self.isOneEditDistance(t, s)
        for idx in range(min(ls, lt)):
            if (s[idx] == t[idx]): continue
            if ls == lt: return s[idx+1:] == t[idx+1:]
            return s[idx+1:] == t[idx:]
        return ls == lt + 1
    

# 这道题卡住了是因为没有搞清楚只能有一个修改，因为只有一个修改所以相同的情况就只能改不同的，所以判断后面是否一样就行不需要过多考虑
# 当不同时，判断一下删了长的后是否一样，因为长的删和短的加是一样的