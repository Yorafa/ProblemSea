class Solution:
    def expand(self, s: str) -> List[str]:
        def bt(n):
            if n >= len(s):
                return ['']
            if s[n] == '{':
                sec = n
                while s[sec] != '}':
                    sec += 1
                lst = s[n+1:sec].split(',')
                cat = bt(sec + 1)
            else:
                lst = [s[n]]
                cat = bt(n+1)
            r = []
            for i in lst:
                for j in cat:
                    r.append(i+j)
            return r
        result =  bt(0)
        result.sort()
        return result


