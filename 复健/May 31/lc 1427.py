from typing import List
class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:
        mov = 0
        for dir, n in shift:
            if dir == 1: mov += n
            else: mov -= n
        if mov == 0: return s
        dir = 1 if mov > 0 else 0
        mov = -mov if dir == 0 else mov
        mov %= len(s)
        if dir == 1:
            return s[-mov:] + s[:-mov]
        else:
            return s[mov:] + s[:mov]

